generic module PrioCritQueueP(uint8_t QUEUE_SIZE, mccpacket* null_element, bool prio1HI, bool prio2HI, bool prio3HI) {
  provides interface PrioCritQueue;
  
  uses {
    interface Queue<mccpacket*> as prio1Queue;
    interface Queue<mccpacket*> as prio2Queue;
    interface Queue<mccpacket*> as prio3Queue;
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

  command mccpacket* PrioCritQueue.head() {
    if (!(call prio1Queue.empty())) return call prio1Queue.head();
    else {
      if (!(call prio2Queue.empty())) return call prio2Queue.head();
      else {
	if (!(call prio3Queue.empty())) return call prio3Queue.head();
	else return null;
      }
    }
  }

  command mccpacket* PrioCritQueue.headHI() {
    // FIX: still to put in the HI checking here
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
  
  command mccpacket* PrioCritQueue.dequeue() {
    if (!(call prio1Queue.empty())) return call prio1Queue.dequeue();
    else {
      if (!(call prio2Queue.empty())) return call prio2Queue.dequeue();
      else {
	return call prio3Queue.dequeue();
      }
    }
  }
  
  command mccpacket* PrioCritQueue.dequeueHI() {
    if (prio1H && !(call prio1Queue.empty())) return call prio1Queue.dequeue();
    else {
      if (prio2H && !(call prio2Queue.empty())) return call prio2Queue.dequeue();
      else {
	if (prio3H) { 
	  return call prio3Queue.dequeue();
	  // What to return here if prio3 empty?
	} else return NULL;
      }
    }
  }

  command error_t PrioCritQueue.enqueue(queue_t newVal, uint8_t prio) {
    if (prio == 1) return call prio1Queue.enqueue(newVal);
    if (prio == 2) return call prio2Queue.enqueue(newVal);
    if (prio == 3) return call prio3Queue.enqueue(newVal);
  }

  command mccpacket* PrioCritQueue.dequeuePrio(uint8_t prio) {
    if (prio == 1) return call prio1Queue.dequeue();
    if (prio == 2) return call prio2Queue.dequeue();
    if (prio == 3) return call prio3Queue.dequeue();
  }

  command mccpacket* PrioCritQueue.headPrio(uint8_t prio) {
    if (prio == 1) return call prio1Queue.head();
    if (prio == 2) return call prio2Queue.head();
    if (prio == 3) return call prio3Queue.head();
  }

  command mccpacket* PrioCritQueue.sizePrio(uint8_t prio) {
    if (prio == 1) return call prio1Queue.size();
    if (prio == 2) return call prio2Queue.size();
    if (prio == 3) return call prio3Queue.size();
  }
}