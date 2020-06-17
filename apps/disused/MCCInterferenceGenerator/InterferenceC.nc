/*
 * Copyright (c) 2006 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */

/**
 * Oscilloscope demo application. See README.txt file in this directory.
 *
 * @author David Gay
 */
#include "Timer.h"
#include "MCCPackets.h"
#include "Interference.h"
#include "SlotTiming.h"

#include "Serial.h"

module InterferenceC @safe()
{
  uses {
    interface Boot;
    interface SplitControl as RadioControl;
    interface AMSend;
    interface Timer<TMilli>;
    interface Leds;
    interface AMSend as UartSend[am_id_t id];
    interface Receive as UartReceive[am_id_t id];
    interface Packet as UartPacket;
    interface AMPacket as UartAMPacket;
  }
}

implementation
{  
  message_t sendBuf;

  bool sendBusy;

  task void sendInterference();

  // The delay between turning on and the first fault appearing
  // is 100 milliseconds
  #define FIRST_FAULT_DELAY 100

  // Increse the inter-fault seperation to this level
  #define FAULT_REPEAT_DELAY ((uint32_t)150*SLOT_LENGTH_MILLIS)
  
  #define FAULT_PACKETS_BURST_LIMIT 5
  #define FAULT_LENGTH_IN_SLOTS 15

  mccpacket intmsg;
  
  uint8_t reading; /* 0 to NREADINGS */

  uint8_t fault_packets_sent = 0;

  // Use LEDs to report various status issues.
  void report_problem() { call Leds.led0Toggle(); }
  void report_sent() { call Leds.led1Toggle(); }
  void report_received() { call Leds.led2Toggle(); }
  
  event void Boot.booted() {
    if (call RadioControl.start() != SUCCESS)
      report_problem();
    
  }

  void setupInterference(bool use_default, intreq_msg * intreq) {
    memset(&intmsg, 0, sizeof(mccpacket));
    intmsg.src = 0x69;
    intmsg.dst = 0x23;
    intmsg.hop_src = 0x69;
    intmsg.hop_dst = 0x23;

    // Fault lasts 20 slots by default
    // if it is not specified elsewhere
    if (intreq->slot_length > 0 && (!use_default)) {
      intmsg.c = intreq->slot_length;
    } else {
      intmsg.c = FAULT_LENGTH_IN_SLOTS;
    }
  }

  event void RadioControl.startDone(error_t error) {
    atomic fault_packets_sent = 0;
    setupInterference(TRUE, NULL);
    post sendInterference(); 
  }

  event void RadioControl.stopDone(error_t error) {

  }
  

  /* At each sample period:
     - if local sample buffer is full, send accumulated samples
     - read next sample */
  event void Timer.fired() {
    if (!sendBusy && sizeof intmsg <= call AMSend.maxPayloadLength())
      {
	// Don't need to check for null because we've already checked length
	// above
	memcpy(call AMSend.getPayload(&sendBuf, sizeof(intmsg)), &intmsg, sizeof intmsg);
	if (call AMSend.send(AM_BROADCAST_ADDR, &sendBuf, sizeof intmsg) == SUCCESS)
	  sendBusy = TRUE;
     }
    if (!sendBusy) report_problem();
  }

  task void sendInterference() {
    if (!sendBusy && sizeof intmsg <= call AMSend.maxPayloadLength())
      {
	// Don't need to check for null because we've already checked length
	// above
	memcpy(call AMSend.getPayload(&sendBuf, sizeof(mccpacket)), &intmsg, sizeof(mccpacket));
	if (call AMSend.send(AM_BROADCAST_ADDR, &sendBuf, sizeof(mccpacket)) == SUCCESS)
	  sendBusy = TRUE;
      }
    if (!sendBusy) report_problem();
  }

  event void AMSend.sendDone(message_t* msg, error_t error) {
    if (error == SUCCESS)
      report_sent();
    else
      report_problem();

    sendBusy = FALSE;

    atomic fault_packets_sent++;
    if (fault_packets_sent < FAULT_PACKETS_BURST_LIMIT)
      {
	post sendInterference();
      } else {
      fault_packets_sent = 0;
      sendBusy = FALSE;
      call Leds.led0Toggle();
      call Timer.startOneShot(FAULT_REPEAT_DELAY);
    }
  }

  event message_t * UartReceive.receive[am_id_t id](message_t *msg, void *payload, uint8_t len) {

    message_t *ret = msg;
    //intreq_msg intreq;
    //intreq_msg * intreq_ptr;

    //call Leds.set(3);
    
    //intreq_ptr = (intreq_msg*)call AMSend.getPayload(msg, sizeof(intreq));
    //memcpy(&intreq, intreq_ptr, sizeof(intreq));
    
    // Set the details for the packet
    //setupInterference(FALSE, &intreq);
    // Send the interference packet 
    //post sendInterference();
    // Maybe if not seen, send it multiple times
    return ret;  
  }

  event void UartSend.sendDone[am_id_t id](message_t* msg, error_t error) {
    
  }
}