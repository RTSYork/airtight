//*************************************************************************************
// * file:        MCC TDMA module
// Based on TinyOS MAC tutorial - Original author: A. Ajith Kumar S. 
// * author:      James Harbin 
// * copyright:   (c) A. Ajith Kumar S, JRH
// * homepage:    www.hib.no/ansatte/aaks
// * email:       jrh512@york.ac.uk
// ************************************************************************************
// * based on:    TinyOS MAC tutorial
// ************************************************************************************
// * License: GNU GPL
// ************************************************************************************

#include <printf.h>

//#define DPRINTF print
#define DEBUG 1
#define DPRINTF(fmt, ...) \
  do { if (DEBUG) printf(fmt, __VA_ARGS__); } while(0)

#define DPRINTF0(str) \
  do { if (DEBUG) printf(str); } while(0)

#include "MCCPackets.h"
#include "SlotTiming.h"
#include "TdmaMac.h"
#include "Timer.h"
#include "BufferParams.h"

module TdmaMacP {

  provides { //General purpose
    interface Init;
    interface FrameConfiguration as Frame;
  }

  provides { // Radio Control
    interface Send as MacSend;
    interface Receive as MacReceive;
    interface SplitControl as MacPowerControl;
  }

  uses { //General purpose
    interface Boot;
  }

  uses {
    interface Leds;
  }
	
  uses { //MAC Stuff	
    interface AMPacket;
    interface Packet;
    interface Random;
    interface StdControl as GenericSlotterPowerControl;
    interface Slotter;
    interface SlotterControl;
    interface FrameConfiguration;
    interface PrioCritQueue<mccpacket*> as forwardQueue;
    interface PacketAcknowledgements as ACK;
  }
	
  uses { //Radio Control
    interface SplitControl as RadioPowerControl;
    interface AMSend as phyNotificationSend;
    interface Receive as phyNotificationReceive;
    interface AMSend as phyDataSend;
    interface Receive as phyDataReceive;
  }
	
  uses {//Time sync stuff from Ftsp library
    interface GlobalTime<TMilli> as GlobalTime;
    interface Timer<TMilli> as FaultClearTimer;
    interface TimeSyncInfo;
    interface TimeSyncMode;
  }
}

implementation {
  
	/** @brief Radio operation variables*/
  bool init;
  bool requestStop;
  bool radioOff;
  bool phyLock; 			// Radio lock to prevent double send

  uint8_t prevSlot;
  
  bool activeFault = FALSE;             // If a fault is currently active...

  bool hiCritMode = FALSE;              // If we are in HI crit mode

  // If the slot table has not been initialised yet
  bool tableNotSetup = TRUE;
  
  /** @brief Time sync info */
  uint32_t myLocalTime,myGlobalTime,myOffset,mySkew;
  uint8_t value;
  uint8_t inSync; 		// Is the node synchronized on time with sink

  uint8_t prioSuccess [3];      // Tracking the last ACK success/fail of different priorities

  // Slot tracking - localSlot is incremented on each node, but the
  // sink is the authoratative source of it
  // 10/01/2018 - localSlot is now no longer incremented or altered by the sink
  // only by Slotter.slot calls
  
  nx_uint16_t localSlot;

  //#define UPDATE_LOCAL_SLOT_FROM_SINK 1 // If this is defined, then update the local slot from the sink
  
  /** @brief Message to transmit From TestAcks */

  // MCC buffers and tables

#define MAX_C_COUNT 3 // The maximum packet C value allowed for any admitted packet

/////////////// Behaviour for the MCC protocol
  
#define USING_CRIT_CHANGES         // If we are using the mixed-crit protocol (remove define for baseline)
#define CRIT_CHANGE_THRESHOLD 2      // When this number of failed ACKs is reached, change mode
#define CLEAR_PACKETS_ON_GOING_HI 1  // If this is defined, clear the packets on going to the HI mode
#define DISCARD_LO_PACKETS_WHILE_HI 1 // If this is 1, discard LO crit packets admitted by application while in HI mode

#define CLEAR_ALL_HIS_ON_BEST_EFFORT 1  // If the node ACK counter reaches, then do we clear out all HIs in the
                                        // buffers currently and return to LO mode

// This is the number of retransmissions to allow for both crit levels
// level. If DEQUEUE_USES_GLOBAL_RETRANSMIT_COUNTER is defined, then
// these are compared against a global (per node) failed ACK
// counter. It is compared using greater-than-or-equals so e.g. 2
// includes an original failed transmission and one transmission
#define MCC_HI_CRIT_RT_LIMIT 4
#define MCC_LO_CRIT_RT_LIMIT 2
  
///////////////////////////////////////

// When a non-sink node gets time synchronization, should it clear out its buffers?
// Probably best to to avoid stale packets the application layer injected
#define CLEAR_BUFFERS_ON_SYNC 1
  
// Minimum and maximum priorities that are allowed to be admitted to the system 
#define MIN_PRIO 1
#define MAX_PRIO 3
  
// MAX_SLOTS is larger than the slot table size... it merely defines the memory
// allocation for the scheduling table in case we want to expand it dynamically
// later. Currently the real size is hardcoded in SLOTS_IN_FRAME in SlotTiming.h
#define MAX_SLOTS 10

#define RECEPTION_HISTORY_STORAGE 50               // The number of reception records to store
#define SENDING_HISTORY_STORAGE 50                 // The number of sent frame records to store
#define RECEPTION_HISTORY_IN_PACKETS 5


// Fault timings
//#define USE_FAULTS 1                               // Undefine to disable faults
#define FAULT_PERIOD_INTERVAL_SLOTS 100            // The interval in slots between successive faults
#define SINK_SLOT_FAULT_OFFSET 15                  // The sink slot fault offset in the slot interval
#define FAULT_LENGTH_SLOTS 15                      // The length of the fault in slots
  
  // Node retransmissions - used in determining when to
  // transition to HI crit mode
  uint8_t node_ack_fails;
  
  // This tracks the maximum of this value over time
  uint8_t max_node_ack_fails;

  // The minimum number of sync packets that have to be observed
  // to activate the TDMA timing synchronisation on non-sink nodes
  #define MIN_SYNC_HISTORY 8

  action mccSchedTable[MAX_SLOTS];
  message_t forwardPktBuffer[MCCBUF_DEPTH_PER_PRIO][MCCBUF_PRIOS];

  mccrecord receptionHistory[RECEPTION_HISTORY_STORAGE];
  mccsend_record sentHistory[SENDING_HISTORY_STORAGE];
  
  message_t selfDataPkt;
  message_t selfNotificationPkt;
  
  /** @brief Payload parts for packets */
  notification_t* notificationPacket;
  mccpacket* dataPacket;
  mccpacket* ackedDataPacket;

  mccpacket nullPkt; // This is a dummy packet with flow ID 99 added
                     // to silence a warning about a potential
                     // unitialized pointer. The pointer is set to
                     // this on creation. If something tries to send
                     // this, it is an error condition in the code for
                     // choosing a packet
  
  /** @brief Slot mechanism and superframe */
  bool slotterInit;		// Slotter initialized after time-synchronized
  uint32_t slotSize;
  uint8_t currentSlot;
  uint8_t superFrameLength,currFrameSize;
  
  uint16_t sequenceCount;
  uint8_t queueSize;
  uint16_t nbReceivedPkts[MAX_NODES];

  // Define the sink node - or the node that controls the time synchronisation
  // of the network
  #define SINK_NODE_ID 0
	
  am_addr_t src;			// Sender source
  am_addr_t realSrc;		// Base source (origin)
  uint8_t i;
  uint8_t outputPower;	// TX power	
  int16_t rssi;			// Received signal strength

  /// MCC fault simulation - creates a fault of the specified length
  void mcc_fault_triggered(uint8_t slot_timings) {
    if (activeFault == FALSE) {
      // Need to encode SLOT_LENGTH somewhere
      uint16_t fault_end_delay = slot_timings * SLOT_LENGTH_MILLIS;
      DPRINTF("Fault received - %u slots, ending in %u\n", slot_timings, fault_end_delay);
      atomic activeFault = TRUE;
      call FaultClearTimer.startOneShot(fault_end_delay);
    }
  }

  void check_fault_should_be_triggered(uint16_t sink_slot) {
#ifdef USE_FAULTS
    uint16_t offset = (sink_slot % FAULT_PERIOD_INTERVAL_SLOTS) - SINK_SLOT_FAULT_OFFSET;
    if (offset > 0 && offset < 6) {
      mcc_fault_triggered(FAULT_LENGTH_SLOTS);
    }
#endif
  }

  ///////// MCC scheduling and debugging functions /////////////
  bool mcc_should_receive(action * table, nx_uint8_t slot) {
    return (table[slot] == A_LISTEN);
  }

  // Register a failed acknowledgement. If necessary switch to HI crit mode, by setting the flag and
  // clearing out any LO crit packets (if selected)
  void mcc_register_failed_ack() {
    // Register the fault by switching to HI crit mode
    atomic {
      node_ack_fails = node_ack_fails + 1;
      if (node_ack_fails > max_node_ack_fails)
	max_node_ack_fails = node_ack_fails;
    }
  }

  void mcc_clear_node_ack_fails() {
    atomic { node_ack_fails = 0; }
  }
  
  void mcc_check_to_go_high() {
    // If in HI mode already, don't try to go again
    // this will affect e.g. if we are clearing queues
#ifdef USING_CRIT_CHANGES
    atomic {
      if (hiCritMode == FALSE) {
	if (node_ack_fails >= CRIT_CHANGE_THRESHOLD) { 
	  hiCritMode = TRUE;                           
#ifdef CLEAR_PACKETS_ON_GOING_HI

	  
	  call forwardQueue.clearLO();

#endif
	}
      }
    }
#endif
  }

  // Return to LO mode, and clear out the counters for the ACKs
  void mcc_return_to_lo_mode() {
    atomic {
      hiCritMode = FALSE;                              
      node_ack_fails = 0;                              
    }
  }
  
  void mcc_printf(mccpacket * pkt) {
    DPRINTF("MCC packet src %u, dst %u, flow %u, prio %u, seq %u, burst %u, rtx %u\n",
	    pkt->src, pkt->dst, pkt->flow_id, pkt->priority, pkt->seq_num, pkt->burst_num, pkt->local_retransmits);
  }

  action get_mcc_action(action * table, nx_uint8_t slot) {
    return table[slot];
  }
  
  void print_mcc_action(action a) {
    switch (a) {
    case A_IDLE: printf("A_IDLE\n"); break;
    case A_TX: printf("A_TX\n"); break;
    case A_LISTEN: printf("A_LISTEN\n"); break;
    }
  }

  void setup_temp_mcc_table() {
    int slot;
    if (tableNotSetup) {
      DPRINTF0("Setting up temp MCC table");
      
      // Setting all slots originally to listen
      for (slot = 0; slot <= 7; slot++) {
	atomic mccSchedTable[slot] = A_LISTEN;
      }
      
      // Then set the appropriate transmission slots
      // Check: is starting from slot 1 here OK?

      atomic {
	if (TOS_NODE_ID == 0) mccSchedTable[2] = A_TX;
	if (TOS_NODE_ID == 1) mccSchedTable[3] = A_TX;
	if (TOS_NODE_ID == 2) mccSchedTable[4] = A_TX;
	if (TOS_NODE_ID == 3) mccSchedTable[5] = A_TX;
	if (TOS_NODE_ID == 4) mccSchedTable[0] = A_TX;
      }      
      atomic tableNotSetup = FALSE;
    }
  }

  void mcc_increase_retransmit_counter(mccpacket * mccpkt) {
    mccpkt->local_retransmits = mccpkt->local_retransmits + 1;
  }
  
  // Handles the retransmission state for the packet, returns
  // TRUE if it should 
  bool mcc_check_should_dequeue_packet(mccpacket * mccpkt) {
    uint8_t _node_ack_fails;
    atomic _node_ack_fails = node_ack_fails;
    if (mccpkt->crit_level == HI) {
      return (_node_ack_fails >= MCC_HI_CRIT_RT_LIMIT);
    } else {
      return (_node_ack_fails >= MCC_LO_CRIT_RT_LIMIT);
    }
  }

  // Checks the overall retranmission count, performs specific
  // action if it exceeds a certain threshold, e.g. drops all
  // LO from the queue
  bool mcc_check_overall_retransmits() {
    
  }

  // This implements the routing table for the MCC case in
  // paper 1
  //
  // n1,n2 <-> n3 <-> n4,n5
  nx_uint8_t route_next_hop(nx_uint8_t dst) {
    nx_uint8_t next_hop;
    next_hop = dst;
    if (((TOS_NODE_ID == 1) || (TOS_NODE_ID == 2))
	&& ((dst == 3) || (dst == 4))) {
      next_hop = 0;
    }

    if (((TOS_NODE_ID == 3) || (TOS_NODE_ID == 4))
	&& ((dst == 1 || (dst == 2)))) {
      next_hop = 0;
    }
    return next_hop;
  }

  // Records the successful reception of the given packet
  // Roll the contents of the array rightwards, and insert
  // the new reception record at the front
  void record_packet_reception(mccpacket * pkt) {
    for (i = RECEPTION_HISTORY_STORAGE - 1; i > 0; i--) {
      receptionHistory[i] = receptionHistory[i-1];
    }
    (receptionHistory[0]).seq_num = pkt->seq_num;
    (receptionHistory[0]).flow_id = pkt->flow_id;
  }

  void record_successfully_sent_frame(mccpacket * pkt) {
    for (i = SENDING_HISTORY_STORAGE - 1; i > 0; i--) {
      sentHistory[i] = sentHistory[i-1];
    }
    (sentHistory[0]).seq_num = pkt->seq_num;
    (sentHistory[0]).flow_id = pkt->flow_id;
    (sentHistory[0]).inject_time = pkt->inject_time;
    (sentHistory[0]).send_time = pkt->send_time;
  }

  // Copies past reception data in the outgoing packet. Note that
  // MCC_PACKET_MAXDATA must be a multiple of 3 otherwise this
  // will have a partial mccrecord
  void enter_reception_data_in_packet(mccpacket * pkt) {
    memcpy(pkt->data, (uint8_t*)sentHistory, MCC_PACKET_MAXDATA);
  }
  
  ///////////////////////////////////////////////////////////////
  
  event void Boot.booted() {
    DPRINTF0("TdmaMac booted\n");
    call RadioPowerControl.start();
  }
	
  /** @brief
   * @source From PureTDMASchedulerP (UPMA)
   * When the module is initialized
   */
  command error_t Init.init() {		

    DPRINTF0("TdmaMac: Init.init");

    currentSlot = 0xff;

    prioSuccess[0] = 0;
    prioSuccess[1] = 0;
    prioSuccess[2] = 0;

    // slotSize is reset by the application layer control interface:
    // now in MCCP.nc
    slotSize = 10; // 10ms standard
    inSync = 0; 		// Set to zero initially since nodes are not synchronized
    sequenceCount = 0;

    node_ack_fails = 0;
    
    /** @brief Packets */		
    notificationPacket = NULL;
    dataPacket = NULL;

    /** @brief Boolean */
    init = FALSE;
    requestStop = FALSE;
    radioOff = TRUE;
    phyLock = FALSE;
    slotterInit = FALSE;
		
    superFrameLength = SLOTS_IN_FRAME;
    currFrameSize = SLOTS_IN_FRAME; //Same as above used by Frame Configuration interface
    
    /** @brief Statistics counter and parent declaration **/
    for(i=0;i<MAX_NODES;i++)
      {
	nbReceivedPkts[i] = 0;
      }

    for (i=0; i < RECEPTION_HISTORY_STORAGE; i++) {
      receptionHistory[0].seq_num = 0;
      receptionHistory[0].flow_id = 0;
    }
    
    // Setup some simple test actions for the node
    // FIX: get the definition passed on the command line when installing
    // examples of how it is done with the NODE_ID are in setid target in support/Makerules
    if (tableNotSetup) setup_temp_mcc_table();
    return SUCCESS;
  }
	
  /** @brief
   * @source From PureTDMASchedulerP (UPMA)

   * Interface to startup the MAC module
   *  */
  command error_t MacPowerControl.start() {
    
    error_t err;
    if (init == FALSE) {
      /** Configuring frame @aaks */
    }
    err = call RadioPowerControl.start();
    DPRINTF0("<Mac>: We are up and running \n");
    return err;
  }

  /** @brief 
   * @source From PureTDMASchedulerP (UPMA)
   * Interface to stop the MAC module
   */ 
  command error_t MacPowerControl.stop() {
    requestStop = TRUE;
    call GenericSlotterPowerControl.stop();
    call RadioPowerControl.stop();
    return SUCCESS;
  }
 	
  /** @brief
   * @source From PureTDMASchedulerP (UPMA)
   * Powering up the radio 
   */
  event void RadioPowerControl.startDone(error_t error) {
    // Set up the nullPkt which is used as a placeholder
    // in packet selection (to avoid unitialised values)
    memset(&nullPkt, 0x99, sizeof(mccpacket));
 		
    DPRINTF0("<PHY>: Radio startup done\n");
    /** @brief Rest is 0 thus for 3 we define 1 */
    
    /** @brief Sink starts right away, rest of the nodes synchronize to the sink */
    atomic{
      radioOff = FALSE; 
      if (init == FALSE) {
	// The sink node must initially synchronise to itself
	// and set up frame parameters
	if (TOS_NODE_ID == SINK_NODE_ID) 
	  {
	    call SlotterControl.synchronize(1);
	    call FrameConfiguration.setFrameLength(superFrameLength);
	  }

	// Temporary test: just while testing independent slots
	// 18/01/2018: This can be removed - synchronization done normally later
	//if (TOS_NODE_ID != SINK_NODE_ID)
	//  {
	//    call SlotterControl.synchronize(1);
	//  }
	
	init = TRUE;
	signal MacPowerControl.startDone(error);
      }
    }
  }
	
  /** @brief
   * @source PureTDMASchedulerP (UPMA) 
   * Stopping radio services
   */
  event void RadioPowerControl.stopDone(error_t error)  {
    if (requestStop)  {
      requestStop = FALSE;
      DPRINTF0("<MAC>: Radio stopped \n");
      atomic radioOff = TRUE; 
    }
  }
 	
  void handle_tx_slot(uint8_t slot) {

    mccpacket * forwardDataPacket;
    error_t queue_has_pkt = SUCCESS;
    bool _phyLock;
    
    forwardDataPacket = &nullPkt;
    
    // If in hi mode, try to get a HI packet. 
    if (hiCritMode == TRUE) {                
      forwardDataPacket = call forwardQueue.headHI(&queue_has_pkt);
      if (queue_has_pkt == FAIL) {
	// If there was nothing in the HI buffers, then it is safe
	// to return to LO mode
	mcc_return_to_lo_mode();
      }
    }
    
    // Now, if we didn't get a packet by here, either were in LO
    // mode originally, or changed back to it after failing to find a
    // HI. So now try all the buffers, including the LO
    if ((hiCritMode == FALSE) || (queue_has_pkt == FAIL)) {       
      forwardDataPacket = call forwardQueue.head(&queue_has_pkt);
    }
    
    // If all buffers are empty, clear the node ack failure counter
    // (since it cannot have any effect if there are no pending packets)
    // Check: is this safe?
    if (queue_has_pkt == FAIL) {
      mcc_clear_node_ack_fails();
    }

    // If at this point, if we do not have a valid packet chosen, but
    // the buffer is non-empty this is an error condition which will
    // lead to a missed slot. Since this will lead to possible
    // deadline misses later, crash the node here
    if ((queue_has_pkt == FAIL) && (call forwardQueue.size() > 0)) {
      call Leds.set(7);
      while (1) { }
    }
    
    // If after all this was a packet in the queue, process it...    
    if (queue_has_pkt == SUCCESS) {
	
      if (hiCritMode) {               // NA
	DPRINTF("In HI mode - selected HI flow %u packet %u RTX %u\n",
		forwardDataPacket->flow_id, forwardDataPacket->seq_num, forwardDataPacket->local_retransmits);
#ifdef DEBUG
	if (forwardDataPacket->flow_id == 0) {
	  DPRINTF0("WARNING: HI packet has flow id=0:");
	  mcc_printf(forwardDataPacket);
	}
#endif 
      } else {
#ifdef DEBUG
	DPRINTF("In LO mode - selected flow %u packet %u\n",
		forwardDataPacket->flow_id, forwardDataPacket->seq_num);;
	mcc_printf(forwardDataPacket);
#endif
      }
      
      DPRINTF("<N> Pointed address %d",(uint16_t)forwardDataPacket);
      DPRINTF("<N> : Queue size is %d \n", call forwardQueue.size());
      dataPacket = (mccpacket*)call Packet.getPayload(&selfDataPkt, sizeof(mccpacket)); // NA
      
      memcpy(dataPacket, forwardDataPacket, sizeof(mccpacket));  //NA
      
      // Debugging code prints out the fields here from the queue before sending
      // It may not be correctly propagated from the queue
      DPRINTF("MAC selfDataPacket src = %u, prio = %u, destination = %u\n", dataPacket->src, dataPacket->priority, dataPacket->dst);

      atomic {
	dataPacket->hop_src = TOS_NODE_ID; 
	dataPacket->hop_dst = route_next_hop(dataPacket->dst);
	dataPacket->send_time = call GlobalTime.getLocalTime(); 
	dataPacket->failed_ack_stats = node_ack_fails;
	enter_reception_data_in_packet(dataPacket);
	_phyLock = phyLock;
      }
      
      if (_phyLock == FALSE) {
	if (radioOff) {
	  DPRINTF0("Waking up sleeping radio \n");
	  call RadioPowerControl.start();
	}
	
	if (activeFault == FALSE) {
	  // If normal operation, request an ACK,
	  // in faulty mode, don't request the ACK
	  // (This will cause the transmit to be discarded later)
	  if (call ACK.requestAck(&selfDataPkt) == FAIL) {
	    DPRINTF0("<ACK> requestACK FAILED");
	  }
	} else {
	  DPRINTF0("Fault is currently in progress... ACK request disabled\n");
	}

	atomic {
	  dataPacket->hopSendSlot = localSlot;
	  // Copy in the delivery success info and then clear it
	  dataPacket->data[0] = prioSuccess[0];
	  dataPacket->data[1] = prioSuccess[1];
	  dataPacket->data[2] = prioSuccess[2];
	  prioSuccess[0] = 0;
	  prioSuccess[1] = 0;
	  prioSuccess[2] = 0;
	}

	if (call phyDataSend.send(dataPacket->hop_dst, &selfDataPkt, sizeof(mccpacket)) == SUCCESS) // NA
	  {
	    atomic phyLock = TRUE;
	    DPRINTF0("MAC: Sent pkt to PHY\n");
	  }
	else DPRINTF0("MAC: Pkt fail\n");
      }
      else 
	DPRINTF0("MAC: Radio Locked \n");
    }
  }
  
  async event void Slotter.slot(uint8_t slot) {

    action scheduled_action;
    nx_uint16_t _localSlot;  // Copy of localSlot local to this function

    atomic {
      if (tableNotSetup) setup_temp_mcc_table();
      currentSlot = slot;
      // Bug fix for fixing time sync 
      // Before incrementing localSlot, check that the
      // synch layer is not called twice within the same
      // slot value here
      if (prevSlot != slot) localSlot = localSlot + 1;
      _localSlot = localSlot;
      prevSlot = slot;
    }

    // If in HI crit mode, Leds are inverted to indicate this
    // If in Fault mode, Leds are set to constant red
    if (activeFault == TRUE) {
	call Leds.set(1);
    } else {
      if (hiCritMode == TRUE)  // NA
	call Leds.set((~slot) % 8);
      else
	call Leds.set(slot % 8);
    }
    
    // Print node/slot ID and the scheduled MCC action
    DPRINTF("Node ID: %u, Slot: %u, SFL %d - ", TOS_NODE_ID, slot, call FrameConfiguration.getFrameLength());
    scheduled_action = get_mcc_action(mccSchedTable, slot);

#ifdef DEBUG
    print_mcc_action(scheduled_action);
    printfflush();
#endif
    
    if (slot == 1 && TOS_NODE_ID == SINK_NODE_ID) {
	/** @brief Code to handle any sending or receiving of control info (TimeSync etc) */
	/** @brief Precisely sending notification to change MOVE to notification slot */
      notificationPacket = (notification_t*)call Packet.getPayload(&selfNotificationPkt, sizeof(notification_t)); // NA
      notificationPacket->rootId = TOS_NODE_ID; // NA
      notificationPacket->sinkSlot = _localSlot;// NA

      // If we do not have the slotter initialised yet, send out the time sync messages
      // Testing trying without this
      // call TimeSyncMode.send();
	
      if(!phyLock) // NA
	  {
	    if(call phyNotificationSend.send
	       (AM_BROADCAST_ADDR, &selfNotificationPkt, sizeof(notification_t)) == SUCCESS)
	      {
		atomic phyLock = TRUE;
		DPRINTF0("<Mac>: Pkt -> Radio \n");
	      }
	    else 
	      DPRINTF0("<Mac>: Pkt <FAIL>  \n");
	  }
	else 
	  DPRINTF0("<Mac-Pkt-Fail>: Radio locked  \n");
    }
    
    // If this is a node in an application time slot, which
    // is scheduled to transmit
    if (slot != 1 && scheduled_action == A_TX) {
      handle_tx_slot(slot);
    }
  }

  // Need to add features for enquing the packet multiple times here
  // if C is greater than 1. Should probably be done at a higher layer,
  // but for now, do it here
  error_t mcc_enqueue_to_buffers(mccpacket * packetToEnqueue, uint32_t injectTime) {
    mccpacket* bufferPkt = NULL;
    //mccpacket* queueHead = NULL;
    
    uint8_t prio = 0; // Priority of the packet to enqueue
    uint8_t size = 0;

    prio = packetToEnqueue->priority;

    if (prio >= MIN_PRIO && prio <= MAX_PRIO) {
      size = (uint8_t)call forwardQueue.sizePrio(prio);
      bufferPkt = (mccpacket*)call Packet.getPayload(&forwardPktBuffer[size][prio], sizeof(mccpacket));
      memcpy(bufferPkt, packetToEnqueue, sizeof(mccpacket));
      
      // Clear the local retransmissions on adding it to the buffer
      bufferPkt->local_retransmits = 0;
      // Set the local arrival slot number
      bufferPkt->enqueueSlot = localSlot; // NA

      // Does this need to be endian-converted?
      bufferPkt->inject_time = injectTime;

      //#ifdef DEBUG
      //DPRINTF0("enqueue_to_buffers -");
      //mcc_printf(bufferPkt);
      //#endif
      
    } else {
      DPRINTF0("WARNING: mcc_enqueue_to_buffers - wrong priority packet\n");
      bufferPkt = NULL;
    }
    
    // Now insert into the queue at a specific priority level
    if (bufferPkt != NULL) {
      call forwardQueue.enqueue(bufferPkt, bufferPkt->priority);

      // size = (uint8_t)call forwardQueue.size();

      // Removed this queue processing code - since it calls head and has to
      // call headHI if in the HI crit mode
      //DPRINTF("<N>: Pointed: %d, Real: %d \n",(uint16_t)bufferPkt,(uint16_t)bufferPkt);
      //DPRINTF("<N>: Queue size at node %d is %d: \n",TOS_NODE_ID,size);
      //if (!call forwardQueue.empty()) {
      //queueHead = call forwardQueue.head();
      //mcc_printf(queueHead);
      // }
      
      // Return success if enqueued the packet OK
      return SUCCESS;
    } else {
      // FAIL if the buffer packet was NULL (space not in the queue)
      return FAIL;
    }
  }
  
  /** @brief Interfaces provided by MAC */
  /**{*/
  /** @brief Send interface provided by MAC */	
  command error_t MacSend.send(message_t * msg, uint8_t len) {
    uint32_t injectTime;
    uint8_t c_count_lim;
    uint8_t c_count;
    uint8_t base_seq_num;
    error_t res;
    error_t loop_res;

    mccpacket* packetToEnqueue = (mccpacket*)call Packet.getPayload(msg, sizeof(mccpacket));
    // Extract the c count from the packet
    
    c_count_lim = packetToEnqueue->c;
    if (c_count_lim > MAX_C_COUNT) c_count_lim = MAX_C_COUNT;
    if (c_count_lim < 0) c_count_lim = 1;

    // If we want to use randomisation, set c_count_lim up here
    DPRINTF("MacSend.send: APP message inside MAC enqueues %u frames\n", c_count_lim);
    mcc_printf(packetToEnqueue);
    
    // Result is presumed success unless one of the calls fails
    res = SUCCESS;
    base_seq_num = packetToEnqueue->seq_num;

#ifdef DISCARD_LO_PACKETS_WHILE_HI
    if ((hiCritMode == TRUE) && (packetToEnqueue->crit_level == LO)) { // NA
      // Discard the packet here if we are in HI crit mode
      DPRINTF0("Discarded LO messages since HI crit mode\n");
      // We return success below since this is not a good way to
      // begin
    } else {
#endif
    
    // Inject multiple packets for the given C count in the buffer
    for (c_count = 0; c_count < c_count_lim; (c_count = c_count + 1)) {

      packetToEnqueue->burst_num = c_count;
      packetToEnqueue->seq_num = base_seq_num + c_count;
      DPRINTF("MacSend.send: c_count = %u\n", c_count);

      injectTime = call GlobalTime.getLocalTime();
      
      loop_res = mcc_enqueue_to_buffers(packetToEnqueue, injectTime);
      if (loop_res != SUCCESS) {
	res = loop_res;
      }
    }
#ifdef DISCARD_LO_PACKETS_WHILE_HI
  }
#endif

    return res;
    // FIX: do we have to explicitly signal sendDone here? Check the original code
  }
	
  /** @brief Cancel possibilities provided by the MAC interface */
  command error_t MacSend.cancel(message_t *msg) { 
    
    /** @brief if using the toSend variable for Application packet
	atomic {
	if (toSend == NULL) return SUCCESS;
	atomic toSend = NULL;
	}
	* */
    /** @brief No current plans to use this */
    return call phyDataSend.cancel(msg);
  }
  
  /** @brief
   * Auto generated missing declarations for interfaces used
   */
  command uint8_t MacSend.maxPayloadLength(){
    // Unused for now (not using APP packets)
    return 0;
  }
  
  command void * MacSend.getPayload(message_t *msg, uint8_t len){
    // Unused for now (not using APP packets)
    return msg;
  }
  /**}*/
  

  event void phyNotificationSend.sendDone(message_t *msg, error_t error){
    DPRINTF("SinkMAC: Notification sent : %u \n",error);
    
    /** @brief Clearing send lock once successfully sent on channel */
    atomic phyLock = FALSE;
    
    signal MacSend.sendDone(msg, error);
  }

  event message_t * phyNotificationReceive.receive(message_t *msg, void *payload, uint8_t len) {
    
    src = (am_addr_t )call AMPacket.source(msg);
    
    /** @brief Checking change value received from sink */
    notificationPacket = (notification_t*)call Packet.getPayload(msg, sizeof(notification_t)); // NA
		
    DPRINTF("<Notification-Pkt>RootId: %d \n", notificationPacket->rootId);
    DPRINTF("currentSlot at sink: %d, ", notificationPacket->sinkSlot);
    
    /** @brief part used to synchronize rest of the nodes 
     * Makes sure nodes are time synced through FTSP with minimum 8 table entries 
     * */
    /**{*/
    //myOffset = call TimeSyncInfo.getOffset();

    //value = call TimeSyncInfo.getNumEntries();

    //if (TOS_NODE_ID != SINK_NODE_ID && slotterInit == FALSE) {
    //  call Leds.set(value);
    //}

    if (TOS_NODE_ID != SINK_NODE_ID) DPRINTF("TimeSyncInfo.getNumEntries = %d\n", value);

    if (TOS_NODE_ID != SINK_NODE_ID && src == SINK_NODE_ID)
      {
	check_fault_should_be_triggered(notificationPacket->sinkSlot);
	//call GlobalTime.local2Global(&myLocalTime);
	//call GenericSlotterPowerControl.start();
	call SlotterControl.synchronize(1);

	atomic {
	  if (slotterInit == FALSE) {
	    slotterInit = TRUE;
	    // On first sync, clear out all buffers, since application messages
	    // could have been injected before the time synchronization
	    // is ready and they may be very stale by now
	    call forwardQueue.clear();
	  }
	}
	  
      }
    /**}*/
    DPRINTF0("  \n");
    DPRINTF("<MAC>: Pkt received from %d \n",src);
    
    return msg;	
  }

  event void phyDataSend.sendDone(message_t *msg, error_t error) {
    uint8_t sentPrio;
    mccpacket * headQueuePacket;
    uint8_t _node_ack_fails;
    
    // Get the sent packet and its priority
    ackedDataPacket = (mccpacket*)call Packet.getPayload(msg, sizeof(mccpacket));
    sentPrio = ackedDataPacket->priority;
    
    DPRINTF("<MAC>: Data sent: err code %u \n", error);
    
    /** @brief ACK testing */
    // A fault being active is the same as a missed ACK
    if (call ACK.wasAcked(msg) && !activeFault) {
      DPRINTF0("<ACK> received - deque pkt\n");

      // Need to store the details of the last received frame
      record_successfully_sent_frame(ackedDataPacket);
      
      // If successful, dequeue from the priority specific queue (We
      // cannot simply dequeue using dequeue() since the application
      // layer could have injected a higher priority packet during the
      // transmission)

      if (sentPrio >= MIN_PRIO && sentPrio <= MAX_PRIO) {
	call forwardQueue.dequeuePrio(sentPrio);
	// Track the success of this packet
	prioSuccess[sentPrio-1] += 1;
      } else {
	DPRINTF("WARNING: invalid priority for dequeue %u", sentPrio);
      }
    }
    else {
      DPRINTF("<ACK> FAIL on flow %u, prio %u\n", ackedDataPacket->flow_id, sentPrio);

      // If the failure was due to an active fault, indicate this
      if (activeFault) {
	DPRINTF0("<ACK> FAIL - due to Fault Active");
      }

      // Register the failed ACK
      mcc_register_failed_ack();

      // If not in HI mode, check if we need to go high
      mcc_check_to_go_high();

#ifdef CLEAR_ALL_HIS_ON_BEST_EFFORT
      atomic _node_ack_fails = node_ack_fails;
      
      // If we got to 4 fails in a row,
      // empty all HI crit buffers too, go back to LO crit
      if (_node_ack_fails >= 4) {
	call forwardQueue.clear();
	atomic {
	  node_ack_fails = 0;
	  hiCritMode = FALSE; 
	}
      }
#endif
      
      
      // Check if the last transmitted MCC packet was received
      // has reached its protocol-specified retransmit limit      
      if (mcc_check_should_dequeue_packet(ackedDataPacket)) {

	// If so, then dequeue from the priority specific queue
	// (We cannot simply dequeue using dequeue() since the
	// application layer could have injected a higher priority
	// packet during the transmission)
	if (sentPrio >= MIN_PRIO && sentPrio <= MAX_PRIO) {
	  call forwardQueue.dequeuePrio(sentPrio);
	} else {
	  DPRINTF("WARNING: invalid priority for dequeue %u", sentPrio);
	}
      } else {
	// If the packet still has retransmits allowed...
	if (sentPrio >= MIN_PRIO && sentPrio <= MAX_PRIO) {
	  // Get it from the specific priority queue head
	  // For some reason, calling mcc_..._counter(ackedDataPacket)
	  // here fails, have to call it on headQueuePacket
	  headQueuePacket = call forwardQueue.headPrio(sentPrio);
	  if (headQueuePacket != NULL) mcc_increase_retransmit_counter(headQueuePacket);
	} else {
	  DPRINTF("WARNING: invalid priority for dequeue %u", sentPrio);
	}
      }
    }
    
    /** @brief Clearing send lock once successfully sent on channel */
    atomic phyLock = FALSE;
    signal MacSend.sendDone(msg, error);
  }

  // JRH: things to add 
  // On reception of a data packet - store it, debug print, need to then prepare for transmission of an ACK
  // maybe use a timer/task for introducing the ACK
  // On reception of an ACK - set the flag to indicate we had success for this transmission

  // Or are the ACKs handled via PacketAcknowledgements? (check) - supposedly it should be
  // although it needs to be tested
  event message_t * phyDataReceive.receive(message_t *msg, void *payload, uint8_t len) {
    nx_uint8_t receivedDest;
    // Temporary pointer to received packet
    mccpacket* tempPacketReceived;

    uint32_t localTime;

    uint8_t slot;  // Local copy of variable for atomic access

    atomic slot = currentSlot;

    tempPacketReceived = (mccpacket*)call Packet.getPayload(msg, sizeof(mccpacket));

    // Check if we're receiving a fault notification packet
    // This is a hack stuck inside an MCC data packet for now
    if ((tempPacketReceived->src == 0x69) && (tempPacketReceived->dst == 0x23)) {
      // Use the C field to indicate the length of the fault in slots
      mcc_fault_triggered(tempPacketReceived->c);
    } else {
      
      receivedDest = tempPacketReceived->dst;
      
      if (receivedDest != TOS_NODE_ID) {

	localTime = call GlobalTime.getLocalTime();
	
	// If not for us, put it on the buffers to retransmit
	// as long as no fault active
	if (!activeFault) {
	  mcc_enqueue_to_buffers(tempPacketReceived, localTime);
	} else {
	  DPRINTF0("Fault active - ignoring received packet\n");
	}
      }
    
      // Check our schedule for whether we should have received anything during this slot    
      if (!mcc_should_receive(mccSchedTable, slot)) {
	// Warn if not (although we have stored it anyway)
	DPRINTF("WARNING: Node %d should not have received in slot %u", TOS_NODE_ID, slot);
	printfflush();
      }
      
      if (receivedDest == TOS_NODE_ID) {
	// Update the statistics with information on the correctly received packet
	record_packet_reception(tempPacketReceived);
	nbReceivedPkts[tempPacketReceived->src]++;
	DPRINTF("MAC: Packet from %u (last hop %u) is for us on node %u\nSending packet towards app layer\n",
		tempPacketReceived->src, tempPacketReceived->hop_src, TOS_NODE_ID);
	/** @brief packet sent towards app */
	return signal MacReceive.receive(msg, payload, len);
      }
    }
    return msg;
    // FIX: check - is this OK to have the return here?
  }
	
  /**}*/	
  
  /** @brief  
   * Frame configuration part, linking Frame from our MAC to
   * Frame Configuration interface provided by Generic Slotter
   */
  /**{*/ 
  command void Frame.setSlotLength(uint32_t slotTimeBms) {
    atomic slotSize = slotTimeBms;
    call FrameConfiguration.setSlotLength(slotSize);
    return;
  }
  command void Frame.setFrameLength(uint8_t numSlots) {
    atomic currFrameSize = numSlots;
    call FrameConfiguration.setFrameLength(currFrameSize);
    return;
  }
  command uint32_t Frame.getSlotLength() {
    atomic slotSize = call FrameConfiguration.getSlotLength();
    return slotSize;
  }
  command uint8_t Frame.getFrameLength() {
    uint8_t frameLength;
    atomic frameLength = call FrameConfiguration.getFrameLength();
    return frameLength;
  }

  event void FaultClearTimer.fired() {
    DPRINTF0("Clearing Fault\n");
    atomic activeFault = FALSE;
  }
}