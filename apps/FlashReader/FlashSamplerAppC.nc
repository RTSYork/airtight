/*
 * Copyright (c) 2007-2009 Intel Corporation
 * All rights reserved.

 * This file is distributed under the terms in the attached INTEL-LICENS
 * file. If you do not find this file, a copy can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */
#include "StorageVolumes.h"
#include <printf.h>

configuration FlashSamplerAppC { }
implementation
{
  components SummarizerC;
  components MainC, LedsC;
  components PrintfC;
  
  components new TimerMilliC() as LogTimer;
  
  components new LogStorageC(VOLUME_SAMPLELOG, TRUE);

  SummarizerC.LogTimer -> LogTimer;
  SummarizerC.Boot -> MainC;
  SummarizerC.Leds -> LedsC;
  SummarizerC.LogRead -> LogStorageC;
}