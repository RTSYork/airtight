components new TXFlowC(3,0,HI,40,40,1,2) as TXFlow1;
components new TXFlowC(4,0,LO,13,13,1,1) as TXFlow2;
TXFlow1.Send -> App.FlowSend;
TXFlow2.Send -> App.FlowSend;
