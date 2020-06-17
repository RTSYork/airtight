/*
 * Copyright (c) 2007-2009 Intel Corporation
 * All rights reserved.

 * This file is distributed under the terms in the attached INTEL-LICENS
 * file. If you do not find this file, a copy can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */
#include "flashsampler.h"

module SummarizerC { 
  provides interface Summary;
  uses interface LogWrite;
  uses interface Boot;
  uses interface Leds;
  uses interface Timer<TMilli> as LogTimer;
}
implementation 
{

  #define LOG_MS_TIMER 100
  
  uint8_t counter = 0;

  uint8_t append_buf[10];
  
  uint16_t summary[SUMMARY_SAMPLES], samples[DFACTOR];
  uint16_t index; // of next summary sample to compute

  void nextSummarySample();

  command void Summary.summarize() {
    // Summarize the current sample block
    index = 0;
    nextSummarySample();
  }

  void nextSummarySample() {

  }

  event void LogTimer.fired() {
    append_buf[0] = counter;
    call LogWrite.append(&append_buf, 10);
  }

  event void LogWrite.appendDone(void* buf, storage_len_t len, bool recordsLost,
			         error_t error) {
    uint8_t local_counter;
    atomic {
      counter = counter + 1;
      local_counter = counter;
      append_buf[0] = counter;
    };
    call Leds.set(local_counter);
    call LogTimer.startOneShot(LOG_MS_TIMER);
  }

  event void Boot.booted() {
    call LogWrite.erase();
  }
  
  event void LogWrite.eraseDone(error_t error) {
    call LogTimer.startOneShot(LOG_MS_TIMER);
  }
  
  event void LogWrite.syncDone(error_t error) { }
}
