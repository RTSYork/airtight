/**
   A priority queue supporting 3 levels of priority for MCC packets
 */

#define QUEUE_COUNT 3

generic configuration PrioCritQueueC(typedef queue_t, uint8_t QUEUE_SIZE, uint8_t hiCrit1, uint8_t hiCrit2, uint8_t hiCrit3) {
  provides interface PrioCritQueue<queue_t> as PCQ;
}

implementation {
  components new PrioCritQueueP(queue_t, QUEUE_SIZE, hiCrit1, hiCrit2, hiCrit3) as QP;
  components new QueueC(queue_t, QUEUE_SIZE) as Q1;
  components new QueueC(queue_t, QUEUE_SIZE) as Q2;
  components new QueueC(queue_t, QUEUE_SIZE) as Q3;

  PCQ = QP.PrioCritQueue;
  QP.prio1Queue -> Q1;
  QP.prio2Queue -> Q2;
  QP.prio3Queue -> Q3;

}