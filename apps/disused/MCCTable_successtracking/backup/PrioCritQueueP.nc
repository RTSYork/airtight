generic module PrioCritQueueP(typedef queue_t, uint8_t QUEUE_SIZE) {
  provides interface PrioCritQueue<queue_t>;
  
  uses {
    interface Queue<queue_t> as prio1Queue;
    interface Queue<queue_t> as prio2Queue;
    interface Queue<queue_t> as prio3Queue;
  }
}

implementation {
    
  command bool PrioCritQueue.empty() {
    return call prio1Queue.empty() && call prio2Queue.empty() && call prio3Queue.empty();
  }

  command bool PrioCritQueue.full() {
    return call prio1Queue.full() || call prio2Queue.full() || call prio3Queue.full();
  }

  command uint8_t PrioCritQueue.size() {
    return call prio1Queue.size() + call prio2Queue.size() + call prio3Queue.size();
  }

  command uint8_t PrioCritQueue.maxSize() {
    return QUEUE_SIZE * QUEUE_COUNT;
  }

  command queue_t PrioCritQueue.head() {
    if (!(call prio1Queue.empty())) return call prio1Queue.head();
    else {
      if (!(call prio2Queue.empty())) return call prio2Queue.head();
      else {
	return call prio3Queue.head();
      }
    }
  }

  void printQueue() {
#ifdef TOSSIM
    dbg("printQueue not yet implemented for PrioCritQueueC.nc");
#endif
  }
  
  command queue_t PrioCritQueue.dequeue() {
    if (!(call prio1Queue.empty())) return call prio1Queue.dequeue();
    else {
      if (!(call prio2Queue.empty())) return call prio2Queue.dequeue();
      else {
	return call prio3Queue.dequeue();
      }
    }
  }

  command error_t PrioCritQueue.enqueue(queue_t newVal, uint8_t prio) {
    if (prio == 1) return call prio1Queue.enqueue(newVal);
    if (prio == 2) return call prio2Queue.enqueue(newVal);
    if (prio == 3) return call prio3Queue.enqueue(newVal);
  }

  command queue_t PrioCritQueue.dequeuePrio(uint8_t prio) {
    if (prio == 1) return call prio1Queue.dequeue();
    if (prio == 2) return call prio2Queue.dequeue();
    if (prio == 3) return call prio3Queue.dequeue();
  }

  command queue_t PrioCritQueue.headPrio(uint8_t prio) {
    if (prio == 1) return call prio1Queue.head();
    if (prio == 2) return call prio2Queue.head();
    if (prio == 3) return call prio3Queue.head();
  }
}