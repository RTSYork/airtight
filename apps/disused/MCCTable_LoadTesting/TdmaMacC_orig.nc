//**************************************************************************
// Edit TdmaMacC_orig - not TdmaMacC.nc
//**************************************************************************

#include "TdmaMac.h"
#include "BufferParams.h"

configuration TdmaMacC {
	provides { //General purpose
		interface Init;
		interface FrameConfiguration;	
	}
	
	provides { // Radio Control
		interface Send as MacSend;
		interface Receive as MacReceive;
		interface SplitControl as MacPowerControl;
	}	
}

implementation {
  components TdmaMacP;
  components GenericSlotterC;
  components LedsC;
  components ActiveMessageC as Phy;
  components new TimerMilliC();
  components new TimerMilliC() as FaultClearTimer;

  // FIX: Need to set these parameters differently for the different nodes
  // Crit settings 0,1,0 - These are BY PRIORITY not by FLOW ID
  // SPLICE_COMPONENT_DEFS_HERE
	
  /** @brief Powering up */	
  Init = TdmaMacP.Init;
  
  /** @brief Power control and frame configuration interface for applications */
  MacPowerControl = TdmaMacP;
  FrameConfiguration = TdmaMacP.Frame;
  
  /** @brief Pkt send/receive interface for applications */
  MacSend = TdmaMacP;
  MacReceive = TdmaMacP;
  
  /** @brief Generic Slotter and slotter control stuff */
  //TdmaMacP.GenericSlotterPowerControl -> GenericSlotterC;
  TdmaMacP.Slotter -> GenericSlotterC;
  TdmaMacP.SlotterControl -> GenericSlotterC;
  TdmaMacP.FrameConfiguration -> GenericSlotterC;
	
  //Uses
  TdmaMacP.RadioPowerControl -> Phy;
  TdmaMacP.AMPacket -> Phy;
  TdmaMacP.Packet -> Phy;
  TdmaMacP.Leds -> LedsC;
  TdmaMacP.ACK -> Phy;								// Provided by CC2420Packet
  TdmaMacP.phyDataSend -> Phy.AMSend[AM_DMAMAC_DATA]; 	// 1 is the id used for data packets
  TdmaMacP.phyDataReceive -> Phy.Receive[AM_DMAMAC_DATA];
  
  TdmaMacP.phyNotificationSend -> Phy.AMSend[AM_DMAMAC_NOTIFICATION]; // 11 is the id used for notification packets
  TdmaMacP.phyNotificationReceive -> Phy.Receive[AM_DMAMAC_NOTIFICATION];
  
  TdmaMacP.forwardQueue -> PrioCritQueueC;
  
  /** @brief Time Sync stuff */
  components TimeSyncC;
  
  TdmaMacP.GlobalTime -> TimeSyncC.GlobalTime;
  TdmaMacP.TimeSyncInfo -> TimeSyncC.TimeSyncInfo;
  TdmaMacP.TimeSyncMode -> TimeSyncC.TimeSyncMode;

  TdmaMacP.FaultClearTimer -> FaultClearTimer;
}
