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

module InterferenceC @safe()
{
  uses {
    interface Boot;
    interface SplitControl as RadioControl;
    interface AMSend;
    interface Timer<TMilli>;
    interface Leds;
  }
}

implementation
{
  typedef struct __interference_msg {
    uint8_t contents[10];
  } interference_msg;
  
  message_t sendBuf;
  bool sendBusy;
 
  #define TIMER_DELAY 10

  interference_msg intmsg; 
  
  uint8_t reading; /* 0 to NREADINGS */

  // Use LEDs to report various status issues.
  void report_problem() { call Leds.led0Toggle(); }
  void report_sent() { call Leds.led1Toggle(); }
  void report_received() { call Leds.led2Toggle(); }

  event void Boot.booted() {
    if (call RadioControl.start() != SUCCESS)
      report_problem();
  }

  void startTimer() {
    call Timer.startPeriodic(TIMER_DELAY);
    reading = 0;
  }

  void setupInterference(void) {
    uint8_t i;
    for (i = 0; i < sizeof (intmsg); i++) {
      if (i % 2 == 0) intmsg.contents[i] = 39;
      else intmsg.contents[i] = 105;
    }
  }
  
  event void RadioControl.startDone(error_t error) {
    setupInterference();
    startTimer();
  }

  event void RadioControl.stopDone(error_t error) {
  }

  /* At each sample period:
     - if local sample buffer is full, send accumulated samples
     - read next sample
  */
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

  event void AMSend.sendDone(message_t* msg, error_t error) {
    if (error == SUCCESS)
      report_sent();
    else
      report_problem();

    call Timer.startOneShot(TIMER_DELAY);
    
    sendBusy = FALSE;
  }
}
