#include <printf.h>

module MCCP {

  provides {
    interface Send as FlowSend;
  }
  
  uses { //General
	interface Boot;
	interface Leds;
	interface Packet;
	interface AMPacket;
	interface SplitControl as MacControl;
	interface PacketAcknowledgements;
  }
  
  uses { //Radio Control
	interface Send as MacSend;
	interface Receive as MacReceive;
	interface FrameConfiguration;

	// Need to factor these out into compoents
	interface Timer<TMilli> as SendTimer;     // Handles transmission of the original packet
//interface Timer<TMilli> as DeadlineTimer; // Handles ensuring expected packets arrive by the deadline
  }
}

implementation {
  
  /** @brief Message variables */
  message_t packet;
  
  mccpacket sending_packet;
  
  uint8_t *nodeId;
  uint16_t packetsSent,packetsReceived;
  bool sends;

  /** @brief New variables */
  uint32_t slotSize;
  uint8_t curFrameSize;  	//Superframe length
  
  void setup_mcc_app_packet(mccpacket * mccpkt, int node_num, int node_dest) {
    printf("APP: Setting up MCC packet fields\n");
    mccpkt->priority = node_num;
    mccpkt->data_len = 5;
    mccpkt->src = node_num;
    mccpkt->dst = node_dest;
    mccpkt->hop_src = node_num;
    mccpkt->hop_dst = node_num - 1;
    printf("MCC packet src = %u, prio = %u, destination = %u\n", mccpkt->src, mccpkt->priority, mccpkt->dst);
  }
  
  // #define DELAY_BETWEEN_MESSAGES 30720 //(30 seconds) delay
  // Replacing this with the TXFlowC components
  uint32_t delay_between_messages() {
    return (40 * 1024);
  }
  
  /***************** Prototypes ****************/
  task void send();
  
  /***************** Boot Events ****************/
  event void Boot.booted() {
    sends = FALSE;
    packetsSent = 0;
    packetsReceived = 0;
    printf("APP: Attempting to start \n");
    call MacControl.start();
    
    // 1024 is one second
    if (TOS_NODE_ID == 1) {
      call SendTimer.startOneShot(1024 * 30);
      // Create test packet sending to node 0
    }
  }
  
  /***************** SplitControl Events ****************/
  event void MacControl.startDone(error_t error) {
    
    /** @brief New initialization part @aaks */
    // Must be 32 kHz timer, so times 32 is necessary for 1ms ticks
    #define SLOT_SIZE_MILLISECS 500 
    slotSize = SLOT_SIZE_MILLISECS * 32; 	//Milliseconds  -- 10ms standard
    curFrameSize = 10; 	// Superframe length is set to 100 slots
    
    /** @brief Configuring frame @aaks */
    call FrameConfiguration.setSlotLength(slotSize);
    call FrameConfiguration.setFrameLength(curFrameSize);
    post send();
  }
  
  /**  @brief Timer block */
  event void SendTimer.fired() {
    printf("APP: Timer fired\n");
    call SendTimer.startOneShot(delay_between_messages());
    post send();
    return;
  }
  
  /** @brief Handler for event sendDone for packet send interface to MAC */ 
  event void MacSend.sendDone(message_t *msg, error_t error){
    printf("APP: Packets sent : %d \n", packetsSent);
    if (&packet == msg) {
      packetsSent++;
      sends = FALSE;
    }
  }
  
  /** @brief After MAC is stopped */
  event void MacControl.stopDone(error_t error) {
    /** @brief To be used to fill in Mac stopping procedure */
  }
  
  /***************** Receive Events ****************/
  event message_t * MacReceive.receive(message_t *msg, void *payload, uint8_t len) {
    printf("APP: Packets received @aaks : %d \n", packetsReceived);
    packetsReceived++;
    return msg;
  }
  
  /** @brief Send task for sending packets to MAC */
  task void send() {
    mccpacket * mccpkt;
    mccpkt = (mccpacket*)call Packet.getPayload(&packet, sizeof(mccpacket));
    setup_mcc_app_packet(mccpkt, TOS_NODE_ID, 0);
    printf("MCCP.send: MCC packet src = %u, prio = %u, destination = %u\n", mccpkt->src, mccpkt->priority, mccpkt->dst);
    
    if(sends == FALSE) {
      if(call MacSend.send(&packet, 1) != SUCCESS) {
	printf("APP: Packet failed \n");
      } else {
	printf("APP: Pkt passed to MAC \n");
      }
    }
  }

  command error_t FlowSend.send(message_t * msg, uint8_t len) {
    if(call MacSend.send(&packet, 1) != SUCCESS) {
	printf("APP: FlowSend failed\n");
    } else {
	printf("APP: FlowSend to MAC\n");
    }
  }

  command uint8_t FlowSend.maxPayloadLength(){
    // Unused for now (not using APP packets)
    return 0;
  }
  
  command void * FlowSend.getPayload(message_t *msg, uint8_t len){
    // Unused for now (not using APP packets)
    return msg;
  }

  command error_t FlowSend.cancel(message_t *msg) {
    // Unimplemented
    return FAIL;
  }
}