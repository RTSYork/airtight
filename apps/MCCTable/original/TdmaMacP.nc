//**************************************************************************
// * file:        MCC TDMA module
// * James Harbin modified the following component from the MCC code

// * author:      A. Ajith Kumar S.
// * copyright:   (c) A. Ajith Kumar S. 
// * homepage:    www.hib.no/ansatte/aaks
// * email:       aji3003 @ gmail.com
// ************************************************************************************
// * part of:     TinyOS MAC tutorial.
// * Refined on:  26-June-2015
// ************************************************************************************
// * License: GNU GPL
// ************************************************************************************

#include "printfZ1.h"
#include "TdmaMac.h"
#include "Timer.h"

module TdmaMacP {
	
	provides { //General purpose
		interface Init;
		interface FrameConfiguration as Frame;
	}

	provides { // Radio Control
		interface Send as MacSend;
		interface Receive as MacReceive;
		interface SplitControl as MacPowerControl;
	}	

	uses { //General purpose
		interface Boot;
	}
	
	uses { //MAC Stuff	
		interface AMPacket;
		interface Packet;
		interface CC2420Packet as linkIndicator;
		interface StdControl as GenericSlotterPowerControl;
		interface Slotter;
		interface SlotterControl;
		interface FrameConfiguration;
		interface Queue<dmamac_data_t*> as forwardQueue;
		interface PacketAcknowledgements as ACK; 
	}
	
	uses { //Radio Control
		interface SplitControl as RadioPowerControl;
		interface AMSend as phyNotificationSend;
		interface Receive as phyNotificationReceive;
		interface AMSend as phyDataSend;
		interface Receive as phyDataReceive;
	}
	
	uses {//Time sync stuff from Ftps library
		interface GlobalTime<TMilli> as GlobalTime;
		interface TimeSyncInfo;
	}
}

implementation {
		
	/** @brief Radio operation variables*/
	bool init;
	bool requestStop;
	bool radioOff;
	bool phyLock; 			// Radio lock to prevent double send
	
	/** @brief Time sync info */
	uint32_t myLocalTime,myGlobalTime,myOffset,mySkew;
	uint8_t value;
	uint8_t inSync; 		// Is the node synchronized on time with sink
	
	/** @brief Message to transmit From TestAcks */
	message_t forwardPktBuffer[MAX_CHILDREN];
	message_t selfDataPkt;
	message_t selfNotificationPkt;
	
	/** @brief Payload parts for packets */
	notification_t* notificationPacket;
	dmamac_data_t* dataPacket;
	
	/** @brief Slot mechanism and superframe */
	bool slotterInit;		// Slotter initialized after time-synchronized
	uint32_t slotSize;
	uint8_t currentSlot;
	uint8_t superFrameLength,currFrameSize;
	
	uint16_t sequenceCount;
	uint8_t queueSize;
	uint16_t nbReceivedPkts[MAX_NODES];
	
	am_addr_t parentId[MAX_NODES];
	am_addr_t src;			// Sender source
	am_addr_t realSrc;		// Base source (origin)
	uint8_t i;
	uint8_t outputPower;	// TX power	
	int16_t rssi;			// Received signal strength

	/** @brief Boot Events 
	 * @source TestAcks in cc2420 tests 
	 */
	event void Boot.booted() {
		printfz1_init();
		call RadioPowerControl.start();
	}
	
	/** @brief
	 * @source From PureTDMASchedulerP (UPMA)
	 * When the module is initialized
	 */
  command error_t Init.init() {		
	
		/** @brief Initialization of necessary variables */
	  currentSlot = 0xff;
	  slotSize = 10 * 32; // 10ms standard
	  inSync = 0; 		// Set to zero initially since nodes are not synchronized
	  sequenceCount = 0;
	  
	  /** @brief Packets */		
	  notificationPacket = NULL;
	  dataPacket = NULL;
	  
	  /** @brief Boolean */
	  init = FALSE;
	  requestStop = FALSE;
	  radioOff = TRUE;
	  phyLock = FALSE;
	  slotterInit = FALSE;
		
		superFrameLength = 100;
		currFrameSize = 100; //Same as above used by Frame Configuration interface
		
		/** @brief Statistics counter and parent declaration **/
		for(i=0;i<MAX_NODES;i++)
		{
			nbReceivedPkts[i] = 0;
			parentId[i] = 0;
		}
	
		return SUCCESS;
	}
	
	/** @brief
	 * @source From PureTDMASchedulerP (UPMA)
	 * Interface to startup the MAC module
	 *  */
 	command error_t MacPowerControl.start() {
 		
 		error_t err;
 		if (init == FALSE) {
	 		/** Configuring frame @aaks */
 		}
 		err = call RadioPowerControl.start();
		printfz1("<Mac>: We are up and running \n");
 		return err;
 	}

 	/** @brief 
 	 * @source From PureTDMASchedulerP (UPMA)
 	 * Interface to stop the MAC module
 	 */ 
 	command error_t MacPowerControl.stop() {
 		requestStop = TRUE;
 		call GenericSlotterPowerControl.stop();
 		call RadioPowerControl.stop();
 		return SUCCESS;
 	}
 	
 	/** @brief
	 * @source From PureTDMASchedulerP (UPMA)
	 * Powering up the radio 
	 */
 	event void RadioPowerControl.startDone(error_t error) {
 		
 		radioOff = FALSE;
 		printfz1("<PHY>: Radio startup done");
 		/** @brief Rest is 0 thus for 3 we define 1 */
		if (TOS_NODE_ID == 3)
			parentId[TOS_NODE_ID] = (am_addr_t) 1;
 		
 		/** @brief Sink starts right away, rest of the nodes synchronize to the sink */
 		atomic{
	 		if (init == FALSE) {	 				 			
	 			if (TOS_NODE_ID == 0) 
	 			{
		 			call GenericSlotterPowerControl.start();
		 			call SlotterControl.synchronize(1);
		 			call FrameConfiguration.setFrameLength(superFrameLength);
	 			}
				init = TRUE;
				signal MacPowerControl.startDone(error);
			}
 		}
	}
	
	/** @brief
 	 * @source PureTDMASchedulerP (UPMA) 
 	 * Stopping radio services
	 */
 	event void RadioPowerControl.stopDone(error_t error)  {
		if (requestStop)  {
			requestStop = FALSE;
			printfz1("<MAC>: Radio stopped \n");
			radioOff = TRUE;
		}
	}	 
 	
 	/** @brief 
 	 * @source From PureTDMASchedulerP (UPMA)
 	 * Goes through each slot performing the desired function
 	 * for the respective slot 
 	 */ 	
 	event void Slotter.slot(uint8_t slot) {
 		dmamac_data_t *forwardDataPacket;
 		
		atomic currentSlot = slot;
		// Put code here to print the slot and our node identity
		printfz1("S: %u, SFL %d \n",currentSlot,call FrameConfiguration.getFrameLength());
		
		if(slot == 0)
		{
			if(TOS_NODE_ID == 0)
			{
				printfz1("<SINK>: Packets received until now \n")
				printfz1("1: %d, 2:%d, 3:%d, 4:%d \n",nbReceivedPkts[1],
				nbReceivedPkts[2],nbReceivedPkts[3],nbReceivedPkts[4])	
			}
		}	
				
		/** @brief Notification slot for sink */
	    if (slot == 1 && TOS_NODE_ID == 0)
	    {
	    	/** @brief Code to handle any sending or receiving of control info (TimeSync etc) */
	    	/** @brief Precisely sending notification to change MOVE to notification slot */
			notificationPacket = (notification_t*)call Packet.getPayload(&selfNotificationPkt, sizeof(notification_t));
			notificationPacket->rootId = TOS_NODE_ID;		
			notificationPacket->currentSlot = currentSlot;
			
			if(!phyLock)
			{
				if(call phyNotificationSend.send
				(AM_BROADCAST_ADDR, &selfNotificationPkt, sizeof(notification_t)) == SUCCESS)
				{
					atomic phyLock = TRUE;
					printfz1("<Mac>: Pkt -> Radio \n");
				}
				else 
					printfz1("<Mac>: Pkt <FAIL>  \n");
			}
			else 
					printfz1("<Mac-Pkt-Fail>: Radio locked  \n");
	   	}
	   	/** @brief Transmission slots for nodes (Manually fed) */
		else if ((TOS_NODE_ID == 0 && slot == 5)  || (TOS_NODE_ID == 3 && (slot == 15 || slot == 20)) ||
				(TOS_NODE_ID == 1 && (slot == 35))|| (TOS_NODE_ID == 2 && slot == 50))
		{ 
			printfz1("<Mac>: My Transmit Slot : %d \n",slot);
			
			sequenceCount++;
			
			dataPacket = (dmamac_data_t*)call Packet.getPayload(&selfDataPkt, sizeof(dmamac_data_t));
			dataPacket->nodeId = TOS_NODE_ID;		
			dataPacket->sequenceNo = sequenceCount;
			dataPacket->rootId = 0;
			
			if (phyLock == FALSE) {
				if(radioOff){
					printfz1("Waking up sleeing radio \n");
					call RadioPowerControl.start();
				}
				call ACK.requestAck(&selfDataPkt);
				if(TOS_NODE_ID == 0)
				{
					if(call phyDataSend.send(AM_BROADCAST_ADDR, &selfDataPkt, sizeof(dmamac_data_t)) == SUCCESS)
						{
							atomic phyLock = TRUE;
							printfz1("MAC: Sent packet to PHY \n");
						}
						else 
							printfz1("MAC: Packet failed  \n");
				}
				else
			    {
					if(call phyDataSend.send(parentId[TOS_NODE_ID], &selfDataPkt, sizeof(dmamac_data_t)) == SUCCESS)
							{
								atomic phyLock = TRUE;
								printfz1("MAC: Sent packet to PHY \n");
							}
							else 
								printfz1("MAC: Packet failed  \n");
				}
			}
 			else 
  				printfz1("MAC: Radio Locked \n");
		}
		/** @brief Forward slot for node 1 (Manually fed) */
		else if (TOS_NODE_ID == 1 && (slot == 40 || slot == 45) && (!call forwardQueue.empty()))
		{ 
			printfz1("<N>: Forwarding slot : %d \n",slot);
			
			forwardDataPacket = call forwardQueue.head();
			printfz1("<N> Pointed address %d",(uint16_t)forwardDataPacket);		 			 	
		 	call forwardQueue.dequeue();
		 	
		 	printfz1("<N> : Queue size is %d \n", call forwardQueue.size());
		 	
		 	dataPacket = (dmamac_data_t*)call Packet.getPayload(&selfDataPkt, sizeof(dmamac_data_t));
			dataPacket->nodeId = forwardDataPacket->nodeId;		
			dataPacket->sequenceNo = forwardDataPacket->sequenceNo;
			dataPacket->rootId = forwardDataPacket->rootId;
			
			printfz1("<N>: Source: %u, ", (uint16_t)forwardDataPacket->nodeId);
			printfz1("Seq No : %u, ", (uint16_t)forwardDataPacket->sequenceNo);
			printfz1("Root : %d \n", (uint8_t)forwardDataPacket->rootId);
		 	
			//toSend != NULL && 
			
			if (phyLock == FALSE) {
				if(radioOff){
					printfz1("Waking up sleeing radio \n");
					call RadioPowerControl.start();
				}
				call ACK.requestAck(&selfDataPkt);
				if(call phyDataSend.send(AM_BROADCAST_ADDR, &selfDataPkt, sizeof(dmamac_data_t)) == SUCCESS)
					{
						atomic phyLock = TRUE;
						printfz1("MAC: Sent pkt to PHY \n");
					}
					else 
						printfz1("MAC: Pkt fail  \n");
			}
 			else 
  				printfz1("MAC: Radio Locked \n");
			
		}
		/** @brief Code for receive slot here if required (especially if radio needs wakeup) */
		else if (slot == 60) {
			/** @brief Currently prints Time Sync update to check status */

			myGlobalTime = call GlobalTime.getLocalTime();
			inSync = (uint8_t) call GlobalTime.local2Global(&myGlobalTime);
			myOffset = call TimeSyncInfo.getOffset();
			mySkew = (uint32_t) call TimeSyncInfo.getSkew();
			value = call TimeSyncInfo.getNumEntries();
			
			printfz1("Global : %lu, Offset : %lu \n",myGlobalTime,myOffset);
			printfz1("Skew : %lu,",mySkew);
			printfz1(" Entries : %u,",value);
			printfz1(" SYNC : %u \n,",inSync);
		}
		/** @brief Define sleep i.e radio off for the rest of the time for power usage test. */
		else if (slot == 61) { 
			
			/** @brief Check if radio is already off */
			if(!radioOff)
			{
				requestStop = TRUE;
				printfz1("MAC: Calling Radio to stop \n");
				call RadioPowerControl.stop();
			}
		}
		else if (slot == 99) // Last slot of the superframe
		{ 
			
			/** @brief Check if radio is already off */
			if(radioOff)
			{
				printfz1("MAC: Radio Start call \n");
				call RadioPowerControl.start();
			}
		}
		
	}
	
	/** @brief Interfaces provided by MAC */
	/**{*/
	/** @brief Send interface provided by MAC */	
	command error_t MacSend.send(message_t * msg, uint8_t len) {
		printfz1("Parent id : %d, Node id %d \n",parentId[TOS_NODE_ID],TOS_NODE_ID);

		/** @brief APP packet is dummy, will be created here and sent by MAC 
		 * if proper App is written its payload can be fit into the MAC packet */ 		
		atomic {
				printfz1("MAC: Prepare APP packet \n");
		    	return SUCCESS;	
		}
	}
	
	/** @brief Cancel possibilities provided by the MAC interface */
 	command error_t MacSend.cancel(message_t *msg) { 
  		
  		/** @brief if using the toSend variable for Application packet
  		atomic {
 			if (toSend == NULL) return SUCCESS;
 			atomic toSend = NULL;
 		}
 		 * */
 		/** @brief No current plans to use this */
 		return call phyDataSend.cancel(msg);
 	}
 	
 	/** @brief
	 * Auto generated missing declarations for interfaces used
	 */
	command uint8_t MacSend.maxPayloadLength(){
		// Unused for now (not using APP packets)
		return 0;
	}

	command void * MacSend.getPayload(message_t *msg, uint8_t len){
		// Unused for now (not using APP packets)
		return msg;
	}
	/**}*/
	

	/** @brief parts handling radio commands and events part */
	/**{*/
	/** @brief 
	 * Event handler for sendDone from the radio module
	 * When packet is sent successfully, we free up the local buffer
	 * <toSend> variable is a local packet buffer
	 */

	/** @brief Event handler for Radio receiving packets */
	
	event void phyNotificationSend.sendDone(message_t *msg, error_t error){
		printfz1("SinkMAC: Notification sent : %u \n",error);
		
		/** @brief Clearing send lock once successfully sent on channel */
		atomic phyLock = FALSE;
		
		signal MacSend.sendDone(msg, error);
	}

	event message_t * phyNotificationReceive.receive(message_t *msg, void *payload, uint8_t len){
		
		src = (am_addr_t )call AMPacket.source(msg);
		
		/** @brief Checking change value received from sink */
		notificationPacket = (notification_t*)call Packet.getPayload(msg, sizeof(notification_t));
		
		printfz1("<Notification-Pkt>RootId: %d \n", notificationPacket->rootId);
		printfz1("currentSlot at sink: %d, ", notificationPacket->currentSlot);
		
		/** @brief part used to synchronize rest of the nodes 
		 * Makes sure nodes are time synced through FTSP with minimum 8 table entries 
		 * */
		/**{*/
		myOffset = call TimeSyncInfo.getOffset();
		value = call TimeSyncInfo.getNumEntries();
		
		if(TOS_NODE_ID != 0 && value == 8 && slotterInit == FALSE && src == 0)
		{
			call GlobalTime.local2Global(&myLocalTime);
			call GenericSlotterPowerControl.start();
			/** @brief Synchronizing to the send slot of the sink that is 1 currently (MOVE planned) */
			call SlotterControl.synchronize(1);
			slotterInit = TRUE;
		}
		/**}*/
		printfz1("  \n");
		printfz1("<MAC>: Pkt received from %d \n",src);
		
		return msg;	
	}

	event void phyDataSend.sendDone(message_t *msg, error_t error){
		printfz1("<N>: Data sent : %u \n",error);
		
		/** @brief ACK testing */
		if(call ACK.wasAcked(msg))
		{	printfz1("<ACK> received \n");}
		else 
			printfz1("<FAIL> \n");
				
		/** @brief Clearing send lock once successfully sent on channel */
		atomic phyLock = FALSE;
		
		signal MacSend.sendDone(msg, error);
	}

	event message_t * phyDataReceive.receive(message_t *msg, void *payload, uint8_t len){
		dmamac_data_t* dataPacketTemp = (dmamac_data_t *)payload;
		dmamac_data_t* dataBuffer =  (dmamac_data_t *)NULL;
		dmamac_data_t* queueHead;	// Used to verify the contents saved in the queue
		
		queueSize = call forwardQueue.size();
		
		dataBuffer = (dmamac_data_t*)call Packet.getPayload(&forwardPktBuffer[queueSize], sizeof(dmamac_data_t));
		dataBuffer->nodeId = dataPacketTemp->nodeId;
		dataBuffer->sequenceNo = dataPacketTemp->sequenceNo;
		dataBuffer->rootId = dataPacketTemp->rootId;
				
		src = (am_addr_t )call AMPacket.source(msg);
		
		printfz1("<N>: Source: %d,", (uint16_t)dataPacketTemp->nodeId);
		printfz1("Seq No : %d,", (uint16_t)dataPacketTemp->sequenceNo);
		printfz1("Root: %d \n", (uint8_t)dataPacketTemp->rootId);
		
		/** @brief realSrc is the original source, src on other hand could be intermediate hop */
		realSrc = (am_addr_t) dataPacketTemp->nodeId;
		
		/** @brief Power level and RSSI */
		outputPower = call linkIndicator.getPower(msg);
		rssi = (uint16_t) call linkIndicator.getRssi(msg);
		printfz1("<N> Power : %u, RSSI : %d dBm \n",outputPower,(rssi-RSSI_OFFSET));
		
		/* If not sink store the received packets in forwarding queue */
		if(TOS_NODE_ID != 0 && src != 0 && parentId[TOS_NODE_ID] != src)
		{
			printfz1("<N>: Source: %d,", (uint16_t)dataBuffer->nodeId);
			printfz1("<N>: Seq No : %d,", (uint16_t)dataBuffer->sequenceNo);
			printfz1("<N>: Root: %d \n", (uint8_t)dataBuffer->rootId);
			
			if(dataBuffer != NULL)
		 	{
				call forwardQueue.enqueue(dataBuffer);
				queueSize = (uint8_t) call forwardQueue.size();
				printfz1("<N>: Pointed: %d, Real: %d \n",(uint16_t)dataBuffer,(uint16_t)dataPacketTemp);
				printfz1("<N>: Queue size at node %d is %d: \n",TOS_NODE_ID,queueSize);
			
				if(!call forwardQueue.empty())
				{
					
					queueHead = call forwardQueue.head();
					printfz1("<N>: Dummy Source: %d,", (uint16_t)queueHead->nodeId);
					printfz1("<N>: Seq No : %d,", (uint16_t)queueHead->sequenceNo);
					printfz1("<N>: Root: %d \n", (uint8_t)queueHead->rootId);
				}
			}
		}
		
		if(TOS_NODE_ID == 0)
			nbReceivedPkts[realSrc]++;
		
		/** @brief multihop check (discarding packet not for me) */
		if(parentId[src] == TOS_NODE_ID)
		{
			/** @brief if multihop packet */
			if(realSrc != src)
			{	printfz1("<N>: Forwarded Pkt %d->%d->%d",realSrc,src,TOS_NODE_ID);}
			else
				printfz1("<N>: Forwarded Pkt %d->%d",src,TOS_NODE_ID);
				
			/** @brief packet sent towards app */
			return signal MacReceive.receive(msg, payload, len);
		}
		else
			return msg;	
	}
	
	/**}*/	
	
	/** @brief  
	 * Frame configuration part, linking Frame from our MAC to
	 * Frame Configuration interface provided by Generic Slotter
	 */
	/**{*/ 
  	command void Frame.setSlotLength(uint32_t slotTimeBms) {
		atomic slotSize = slotTimeBms;
		call FrameConfiguration.setSlotLength(slotSize);
		return;
 	}
 	command void Frame.setFrameLength(uint8_t numSlots) {
 		atomic currFrameSize = numSlots;
 		call FrameConfiguration.setFrameLength(currFrameSize);
 		return;
 	}
 	command uint32_t Frame.getSlotLength() {
		atomic slotSize = call FrameConfiguration.getSlotLength();
 		return slotSize;
 	}
 	command uint8_t Frame.getFrameLength() {
 		uint8_t frameLength;
 		atomic frameLength = call FrameConfiguration.getFrameLength();
 		return frameLength;
 	}
	/**}*/
	
	/** @brief Use tasks for non pre-empted execution (not used now) */
	
}

