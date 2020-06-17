/**
   A priority queue supporting 3 levels of priority for MCC packets
 */

#define QUEUE_COUNT 3

// Do not use QUEUE_SIZE greater than 255 / QUEUE_COUNT in here
// since there are no overflow checks

generic configuration PrioCritQueueC(typedef queue_t, uint8_t QUEUE_SIZE) {
  provides interface PrioCritQueue<queue_t> as PCQ;
}

implementation {
  components new PrioCritQueueP(queue_t, QUEUE_SIZE) as QP;
  components new QueueC(queue_t, QUEUE_SIZE) as Q1;
  components new QueueC(queue_t, QUEUE_SIZE) as Q2;
  components new QueueC(queue_t, QUEUE_SIZE) as Q3;

  PCQ = QP.PrioCritQueue;
  QP.prio1Queue -> Q1;
  QP.prio2Queue -> Q2;
  QP.prio3Queue -> Q3;
}