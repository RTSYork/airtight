//**************************************************************************
// * file:        MCC TDMA module
// * James Harbin modified the following component from the MCC code

// * author:      A. Ajith Kumar S.
// * copyright:   (c) A. Ajith Kumar S. 
// * homepage:    www.hib.no/ansatte/aaks
// * email:       aji3003 @ gmail.com
// ************************************************************************************
// * part of:     TinyOS MAC tutorial.
// * Refined on:  26-June-2015
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
  }
}

implementation {
		
	/** @brief Radio operation variables*/
  bool init;
  bool requestStop;
  bool radioOff;
  bool phyLock; 			// Radio lock to prevent double send

  bool activeFault = FALSE;             // If a fault is currently active...

  // If the slot table has not been initialised yet
  bool tableNotSetup = TRUE;
  
  /** @brief Time sync info */
  uint32_t myLocalTime,myGlobalTime,myOffset,mySkew;
  uint8_t value;
  uint8_t inSync; 		// Is the node synchronized on time with sink

  // JRH: slot tracking - localSlot is incremented on each node, but the
  // sink is the authoratative source of it
  nx_uint16_t localSlot;

  /** @brief Message to transmit From TestAcks */

  // MCC buffers and tables

#define MAX_C_COUNT 3 // The maximum packet count

#define MIN_PRIO 1
#define MAX_PRIO 3
  
#define MCCBUF_DEPTH_PER_PRIO 10
#define MCCBUF_PRIOS 3

// This is not the actual number of slots - this is set in
// in SLOTS_IN_FRAME in Slot
#define MAX_SLOTS 10

#define MCC_HI_CRIT_RT_LIMIT 3
#define MCC_LO_CRIT_RT_LIMIT 1

  // Node retransmissions - used in tracking a potential blackout
  // period
  uint8_t node_retransmits;

  // The minimum number of sync packets that have to be observed
  // to activate the TDMA timing synchronisation on non-sink nodes
  #define MIN_SYNC_HISTORY 8

  action mccSchedTable[MAX_SLOTS];
  message_t forwardPktBuffer[MCCBUF_DEPTH_PER_PRIO][MCCBUF_PRIOS];
  
  message_t selfDataPkt;
  message_t selfNotificationPkt;
  
  /** @brief Payload parts for packets */
  notification_t* notificationPacket;
  mccpacket* dataPacket;
  mccpacket* ackedDataPacket;
  
  /** @brief Slot mechanism and superframe */
  bool slotterInit;		// Slotter initialized after time-synchronized
  uint32_t slotSize;
  uint8_t currentSlot;
  uint8_t superFrameLength,currFrameSize;
  
  uint16_t sequenceCount;
  uint8_t queueSize;
  uint16_t nbReceivedPkts[MAX_NODES];

  // Define the sink node
  #define SINK_NODE_ID 0
	
  am_addr_t src;			// Sender source
  am_addr_t realSrc;		// Base source (origin)
  uint8_t i;
  uint8_t outputPower;	// TX power	
  int16_t rssi;			// Received signal strength

  /// MCC fault sim
  void mcc_fault_triggered(uint8_t slot_timings) {
    if (activeFault == FALSE) {
      // Need to encode SLOT_LENGTH somewhere
      uint16_t fault_end_delay = slot_timings * SLOT_LENGTH_MILLIS;
      DPRINTF("Fault received - %u slots, ending in %u\n", slot_timings, fault_end_delay);
      atomic activeFault = TRUE;
      call FaultClearTimer.startOneShot(fault_end_delay);
    }
  }

  ///////// MCC scheduling and debugging functions /////////////
  bool mcc_should_receive(action * table, nx_uint8_t slot) {
    return (table[slot] == A_LISTEN);
  }
  
  void mcc_printf(mccpacket * pkt) {
    DPRINTF("MCC packet Src = %u, Dst = %u, prio = %u\n", pkt->src, pkt->dst, pkt->priority);
    printfflush();
  }

  action get_mcc_action(action * table, nx_uint8_t slot) {
    return table[slot];
  }
  
  void print_mcc_action(action a) {
#if DEBUG
    switch (a) {
    case A_IDLE: printf("A_IDLE\n"); break;
    case A_TX: printf("A_TX\n"); break;
    case A_LISTEN: printf("A_LISTEN\n"); break;
    }
#endif
  }

  void setup_temp_mcc_table() {
    int slot;
    if (tableNotSetup) {
      DPRINTF0("Setting up temp MCC table");
      
      // Setting all slots originally to listen
      for (slot = 1; slot <= 7; slot++) {
	atomic mccSchedTable[slot] = A_LISTEN;
      }
      
      // Then set the appropriate transmission slots
      // Check: is starting from slot 1 here OK?

      atomic {
      if (TOS_NODE_ID == 0) mccSchedTable[1] = A_TX;
      if (TOS_NODE_ID == 0) mccSchedTable[2] = A_TX;
      if (TOS_NODE_ID == 1) mccSchedTable[3] = A_TX;
      if (TOS_NODE_ID == 2) mccSchedTable[4] = A_TX;
      if (TOS_NODE_ID == 3) mccSchedTable[5] = A_TX;
      if (TOS_NODE_ID == 4) mccSchedTable[6] = A_TX;
      }

      atomic tableNotSetup = FALSE;
    }
  }

  void mcc_increase_retransmit_counter(mccpacket * mccpkt) {
    mccpkt->local_retransmits = mccpkt->local_retransmits + 1;
    node_retransmits++;
  }
  
  // Handles the retransmission state for the packet, returns
  // TRUE if it should 
  bool mcc_check_should_dequeue_packet(mccpacket * mccpkt) {
    if (mccpkt->crit_level == HI) {
      return (mccpkt->local_retransmits >= MCC_HI_CRIT_RT_LIMIT);
    } else {
      return (mccpkt->local_retransmits >= MCC_LO_CRIT_RT_LIMIT);
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

    // slotSize is reset by the application layer control interface:
    // now in MCCP.nc
    slotSize = SLOT_LENGTH_MILLIS; // 10ms standard
    
    
    inSync = 0; 		// Set to zero initially since nodes are not synchronized
    sequenceCount = 0;

    node_retransmits = 0;
    
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
    currFrameSize = 100; //Same as above used by Frame Configuration interface
    
    /** @brief Statistics counter and parent declaration **/
    for(i=0;i<MAX_NODES;i++)
      {
	nbReceivedPkts[i] = 0;
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
 		
    radioOff = FALSE;
    DPRINTF0("<PHY>: Radio startup done\n");
    /** @brief Rest is 0 thus for 3 we define 1 */
    
    /** @brief Sink starts right away, rest of the nodes synchronize to the sink */
    atomic{
      if (init == FALSE) {	 				 			
	if (TOS_NODE_ID == SINK_NODE_ID) 
	  {
	    call SlotterControl.synchronize(1);
	    call FrameConfiguration.setFrameLength(superFrameLength);
	  }
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
      radioOff = TRUE;
    }
  }	 
 	
  /** @brief 
   * @source From PureTDMASchedulerP (UPMA)
   * Goes through each slot performing the desired function
   * for the respective slot 
   */ 	
  async event void Slotter.slot(uint8_t slot) {

    action scheduled_action;
    mccpacket * forwardDataPacket;

    atomic {
      if (tableNotSetup) setup_temp_mcc_table();
      currentSlot = slot;
      localSlot = localSlot + 1;
    }

    call Leds.set(slot % 8);
    
    // Print node/slot ID and the scheduled MCC action
    DPRINTF("Node ID: %u, Slot: %u, SFL %d - ", TOS_NODE_ID, slot, call FrameConfiguration.getFrameLength());
    scheduled_action = get_mcc_action(mccSchedTable, slot);
    print_mcc_action(scheduled_action);
    printfflush();
    
    /** @brief Notification slot for sink */
    // Do we need this still? Leave it in for now
    if (slot == 0 && TOS_NODE_ID == SINK_NODE_ID) {
      /** @brief Code to handle any sending or receiving of control info (TimeSync etc) */
      /** @brief Precisely sending notification to change MOVE to notification slot */
      notificationPacket = (notification_t*)call Packet.getPayload(&selfNotificationPkt, sizeof(notification_t));
      notificationPacket->rootId = TOS_NODE_ID;

      // This isn't use for timesync, just at the (overlaid)
      // attempt at obtaining a global time
      notificationPacket->sinkSlot = localSlot;
      
      if(!phyLock)
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
    if (slot > 0 && scheduled_action == A_TX) {
      DPRINTF0("Scheduled for transmission - ");
      if (call forwardQueue.size() == 0) {
	DPRINTF0("Nothing to send\n");
      } else {
	DPRINTF0("Selecting packet\n");
	forwardDataPacket = call forwardQueue.head();
	DPRINTF("<N> Pointed address %d",(uint16_t)forwardDataPacket);                                         
	//call forwardQueue.dequeue();
	
	DPRINTF("<N> : Queue size is %d \n", call forwardQueue.size());
	dataPacket = (mccpacket*)call Packet.getPayload(&selfDataPkt, sizeof(mccpacket));
	
	memcpy(dataPacket, forwardDataPacket, sizeof(mccpacket));
	
	// Debugging code prints out the fields here from the queue before sending
	// It may not be correctly propagated from the queue
	DPRINTF("MAC selfDataPacket src = %u, prio = %u, destination = %u\n", dataPacket->src, dataPacket->priority, dataPacket->dst);
	
	// CHECK: should we fill in ActiveMessage fields here? For now just using fields
	// in the packet
	dataPacket->hop_src = TOS_NODE_ID;
	// FIX: call a real routing function here
	dataPacket->hop_dst = route_next_hop(dataPacket->dst);
	
	if (phyLock == FALSE) {
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
	  
	  dataPacket->hopSendSlot = localSlot;
	  if(call phyDataSend.send(dataPacket->hop_dst, &selfDataPkt, sizeof(mccpacket)) == SUCCESS)
	    {
	      atomic phyLock = TRUE;
	      DPRINTF0("MAC: Sent pkt to PHY \n");
	    }
	  else DPRINTF0("MAC: Pkt fail  \n");
	}
	else 
	  DPRINTF0("MAC: Radio Locked \n");
      }
    }
  }

  // Need to add features for enquing the packet multiple times here
  // if C is greater than 1. Should probably be done at a higher layer,
  // but for now, do it here
  error_t mcc_enqueue_to_buffers(mccpacket * packetToEnqueue) {
    mccpacket* bufferPkt = NULL;
    mccpacket* queueHead = NULL;
    
    uint8_t prio = 0; // Priority of the packet to enqueue
    uint8_t size = 0;

    prio = packetToEnqueue->priority;

    if (prio >= MIN_PRIO && prio <= MAX_PRIO) {
      size = (uint8_t)call forwardQueue.sizePrio(prio);
      bufferPkt = (mccpacket*)call Packet.getPayload(&forwardPktBuffer[size][prio], sizeof(mccpacket));
      memcpy(bufferPkt, packetToEnqueue, sizeof(mccpacket));
      
      // Clear the local retransmissions in the buffer
      bufferPkt->local_retransmits = 0;
      // Set the local arrival slot number
      bufferPkt->enqueueSlot = localSlot;
      
      mcc_printf(bufferPkt);
    } else {
      DPRINTF0("WARNING: mcc_enqueue_to_buffers - wrong priority packet\n");
      bufferPkt = NULL;
    }
    
    // Now insert into the queue at a specific priority level
    if (bufferPkt != NULL) {
      call forwardQueue.enqueue(bufferPkt, bufferPkt->priority);
      size = (uint8_t)call forwardQueue.size();
      DPRINTF("<N>: Pointed: %d, Real: %d \n",(uint16_t)bufferPkt,(uint16_t)bufferPkt);
      DPRINTF("<N>: Queue size at node %d is %d: \n",TOS_NODE_ID,size);
      if (!call forwardQueue.empty()) {
	queueHead = call forwardQueue.head();
	mcc_printf(queueHead);
      }
      // Return success if enqueued the packet OK
      return SUCCESS;
    } else {
      return FAIL;
    }
  }
  
  /** @brief Interfaces provided by MAC */
  /**{*/
  /** @brief Send interface provided by MAC */	
  command error_t MacSend.send(message_t * msg, uint8_t len) {
    uint8_t c_count_lim;
    uint8_t c_count;
    error_t res;
    error_t loop_res;

    mccpacket* packetToEnqueue = (mccpacket*)call Packet.getPayload(msg, sizeof(mccpacket));
    // Extract the c count from the packet
    
    c_count_lim = packetToEnqueue->c;
    if (c_count_lim > MAX_C_COUNT) c_count_lim = MAX_C_COUNT;
    if (c_count_lim < 0) c_count_lim = 1;

    // If we want to use randomisation, set c_count_lim up here
    DPRINTF("MacSend.send: APP packet inside MAC enqueue %u times\n", c_count_lim);
    mcc_printf(packetToEnqueue);
    
    // Result is presumed success unless one of the calls fails
    res = SUCCESS;
    
    // Inject multiple packets for the given C count in the buffer
    for (c_count = 0; c_count < c_count_lim; c_count++) {
      loop_res = mcc_enqueue_to_buffers(packetToEnqueue);
      packetToEnqueue->c = packetToEnqueue->c + 1;
      packetToEnqueue->burst_num = c_count;
      if (loop_res != SUCCESS) {
	res = loop_res;
      }
    }

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
    notificationPacket = (notification_t*)call Packet.getPayload(msg, sizeof(notification_t));
		
    DPRINTF("<Notification-Pkt>RootId: %d \n", notificationPacket->rootId);
    DPRINTF("currentSlot at sink: %d, ", notificationPacket->sinkSlot);
    
    /** @brief part used to synchronize rest of the nodes 
     * Makes sure nodes are time synced through FTSP with minimum 8 table entries 
     * */
    /**{*/
    myOffset = call TimeSyncInfo.getOffset();

    value = call TimeSyncInfo.getNumEntries();
    if (TOS_NODE_ID != SINK_NODE_ID) DPRINTF("TimeSyncInfo.getNumEntries = %d\n", value);

    // Temporarily turning off TimeSync
    //if(TOS_NODE_ID != 0 && value == 8 && slotterInit == FALSE && src == 0)
    if (TOS_NODE_ID != SINK_NODE_ID && value == MIN_SYNC_HISTORY && src == SINK_NODE_ID)
      {
	call GlobalTime.local2Global(&myLocalTime);
	//call GenericSlotterPowerControl.start();
	/** @brief Synchronizing to the send slot of the sink that is 1 currently (MOVE planned) */
	call SlotterControl.synchronize(1);
	slotterInit = TRUE;

	// Reset the global slot num from the arrived packet
	if (localSlot != notificationPacket->sinkSlot) {
	  DPRINTF("TWARNING: localSlot=%u, notficationSlot=%u\n", localSlot, notificationPacket->sinkSlot);
	} else {
	  localSlot = notificationPacket->sinkSlot;
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
    
    // Get the sent packet and its priority
    ackedDataPacket = (mccpacket*)call Packet.getPayload(msg, sizeof(mccpacket));
    sentPrio = ackedDataPacket->priority;
    
    DPRINTF("<MAC>: Data sent: err code %u \n", error);
    
    /** @brief ACK testing */
    // A fault being active is the same as a missed ACK
    if (call ACK.wasAcked(msg) && !activeFault) {
      DPRINTF0("<ACK> received - deque pkt\n");

      // If successful, dequeue from the priority specific queue (We
      // cannot simply dequeue using dequeue() since the application
      // layer could have injected a higher priority packet during the
      // transmission)
      
      if (sentPrio >= MIN_PRIO && sentPrio <= MAX_PRIO) {
	call forwardQueue.dequeuePrio(sentPrio);
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
	  mcc_increase_retransmit_counter(headQueuePacket);
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
	// If not for us, put it on the buffers to retransmit
	// as long as no fault active
	if (!activeFault) {
	  mcc_enqueue_to_buffers(tempPacketReceived);
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
      
      if(receivedDest == TOS_NODE_ID) {
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
  /**}*/
  
  /** @brief Use tasks for non pre-empted execution (not used now) */	
}