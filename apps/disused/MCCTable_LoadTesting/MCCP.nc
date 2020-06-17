#include <printf.h>
#include "SlotTiming.h"

#define DEBUG 0
#define DPRINTF(fmt, ...) \
  do { if (DEBUG) printf(fmt, __VA_ARGS__); } while(0)

#define DPRINTF0(str) \
  do { if (DEBUG) printf(str); } while(0)

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
  }
}

implementation {
  
  /** @brief Message variables */
  message_t packet;
  
  mccpacket sending_packet;

  mccpacket * rcv_packet;
  
  uint8_t *nodeId;
  uint16_t packetsSent,packetsReceived;
  bool sends;

  /** @brief New variables */
  uint32_t slotSize;
  uint8_t curFrameSize;  	//Superframe length
  
  /***************** Boot Events ****************/
  event void Boot.booted() {
    sends = FALSE;
    packetsSent = 0;
    packetsReceived = 0;
    DPRINTF0("APP: Attempting to start \n");
    call MacControl.start();
  }
  
  /***************** SplitControl Events ****************/
  event void MacControl.startDone(error_t error) {
    DPRINTF0("MacControl.startDone\n");
    /** @brief New initialization part @aaks */

    // Now defined in SlotTiming.h
    // Must be 32 kHz timer, so times 32 is necessary per 1ms ticks
    slotSize = SLOT_LENGTH_MILLIS * 32; 	//Milliseconds  -- 10ms standard
    curFrameSize = SLOTS_IN_FRAME;	
    
    /** @brief Configuring frame @aaks */
    call FrameConfiguration.setSlotLength(slotSize);
    call FrameConfiguration.setFrameLength(curFrameSize);
    
  }
  
  /** @brief Handler for event sendDone for packet send interface to MAC */ 
  event void MacSend.sendDone(message_t *msg, error_t error){
    DPRINTF("APP: Packets sent : %d \n", packetsSent);
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
    //rcv_packet = (mccpacket*)call Packet.getPayload(msg, sizeof(mccpacket));
    //printf("APP: Packet received for flow %u: %d\n", rcv_packet->flow_id, packetsReceived);
    DPRINTF0("APP MacReceive.receive: received\n");
    packetsReceived++;
    return msg;
    // FIX: put this into RXFlow components 
  }
  
  command error_t FlowSend.send(message_t * msg, uint8_t len) {
    error_t code;
    
    code = call MacSend.send(msg, len);
    // FIX: put in a multiplexing layer here for the various sources
    // What if two applications try to transmit entirely simultaneously?
    if(code != SUCCESS) {
	DPRINTF0("APP: FlowSend failed\n");
    } else {
	DPRINTF0("APP: FlowSend to MAC OK\n");
    }
    signal FlowSend.sendDone(msg, code);
    return code;
  }

  command uint8_t FlowSend.maxPayloadLength(){
    // Unused for now (not using APP packets)
    return sizeof(mccpacket);
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