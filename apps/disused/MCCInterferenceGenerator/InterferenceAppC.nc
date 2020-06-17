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
 * Oscilloscope demo application. Uses the demo sensor - change the
 * new DemoSensorC() instantiation if you want something else.
 *
 * See README.txt file in this directory for usage instructions.
 *
 * @author David Gay
 */
configuration InterferenceAppC { }

implementation {
  components InterferenceC, MainC, ActiveMessageC, LedsC,
    new TimerMilliC(), new DemoSensorC() as Sensor, 
    new AMSenderC(11);

  components SerialActiveMessageC as Serial;
  
  InterferenceC.UartReceive -> Serial.Receive;
  InterferenceC.UartPacket -> Serial;
  InterferenceC.UartAMPacket -> Serial;
  
  InterferenceC.Boot -> MainC;
  InterferenceC.RadioControl -> ActiveMessageC;
  InterferenceC.AMSend -> AMSenderC;
  InterferenceC.Timer -> TimerMilliC;
  InterferenceC.Leds -> LedsC;
}
