/*
 * Copyright (c) 2007-2009 Intel Corporation
 * All rights reserved.

 * This file is distributed under the terms in the attached INTEL-LICENS
 * file. If you do not find this file, a copy can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */
#include "flashsampler.h"
#include <printf.h>

module SummarizerC { 
  provides interface Summary;
  uses interface LogRead;
  uses interface Boot;
  uses interface Leds;
  uses interface Timer<TMilli> as LogTimer;
}

implementation {

  #define LOG_READ_TIMER 100
  #define LOG_SIZE 10
  
  uint8_t append_buf[LOG_SIZE];
  
  uint16_t summary[SUMMARY_SAMPLES], samples[DFACTOR];
  uint16_t index; // of next summary sample to compute

  void nextSummarySample();

  command void Summary.summarize() {
    // Summarize the current sample block
    index = 0;
    nextSummarySample();
  }

  event void LogTimer.fired() {
    printf("Timer fired\n");
    printfflush();
    call LogRead.read(&append_buf, LOG_SIZE);
  }

  event void LogRead.readDone(void * buf, storage_len_t len, error_t error) {
    uint16_t read_counter;
    read_counter = append_buf[0];
    printf("Read from flash = %u\n", read_counter);
    call Leds.set(read_counter);
    printfflush();
    call LogTimer.startOneShot(LOG_READ_TIMER);
  }

  event void LogRead.seekDone(error_t error) {

  }

  event void Boot.booted() {
    call Leds.set(3);
    //printf("Booted\n");
    call LogTimer.startOneShot(LOG_READ_TIMER);
  }
}
