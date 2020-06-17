components new TXFlowC(8, 4,LO,32,14,1,1) as TXFlow1;
components new TXFlowC(9, 0,HI,64,32,1,2) as TXFlow2;
components new TXFlowC(10,0,LO,32,32,2,3) as TXFlow3;
TXFlow1.Send -> App.FlowSend;
TXFlow2.Send -> App.FlowSend;
TXFlow3.Send -> App.FlowSend;