components new TXFlowC(1,2,LO,30,30,2,2) as TXFlow1;
components new TXFlowC(2,0,LO,26,13,1,1) as TXFlow2;
TXFlow1.Send -> App.FlowSend;
TXFlow2.Send -> App.FlowSend;