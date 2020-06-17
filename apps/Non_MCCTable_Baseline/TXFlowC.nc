generic configuration TXFlowC(uint8_t flow_num, uint8_t dest_id, uint8_t crit_level, uint8_t periodSlots, uint8_t deadlineSlots, uint8_t c, uint8_t priority) {
  uses interface Send;
  // Need an interface here for setting the send params?
}

implementation {
  components new TimerMilliC();
  components new TXFlowP(flow_num, dest_id, crit_level, periodSlots, deadlineSlots, c, priority) as TXF;
  components ActiveMessageC as Phy;

  components PrintfC;
  components SerialStartC;
  components LedsC;
  components TimeSyncC;
  components MainC;

  TXF.Boot -> MainC;
  TXF.Packet -> Phy;
  TXF.AMPacket -> Phy;
  TXF.SendTimer -> TimerMilliC;
  
  Send = TXF.AppSend;
}