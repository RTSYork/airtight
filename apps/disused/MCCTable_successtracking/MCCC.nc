// Overall configuration to tie together the various modules
// MCCC_orig.nc is the master file - do not edit MCCC.nc
configuration MCCC {
}

implementation {
  components TdmaMacC as MAC;
  components MCCP as App;
  components ActiveMessageC as Phy;

  components PrintfC;
  components SerialStartC;
  components LedsC;
  components TimeSyncC;
  components MainC;

  components new TimerMilliC();

#define HI 1
#define LO 0

// This inserts the appropriate flows here
components new TXFlowC(11,0,HI,40,40,2,1) as TXFlow1;
TXFlow1.Send -> App.FlowSend;  
  App.Boot -> MainC;
  
  App.AMPacket -> Phy;
  App.Packet -> Phy;
  
  App.Leds -> LedsC;
  App.MacControl -> MAC;
  App.MacSend -> MAC;
  App.MacReceive -> MAC;
  App.FrameConfiguration -> MAC;
  
  MainC.SoftwareInit -> TimeSyncC;
  TimeSyncC.Boot -> MainC;
}