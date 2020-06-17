// FIX: insert error_t pointers as an argument of anything that could return an
// error_t
generic module PrioCritQueueP(typedef queue_t, uint8_t QUEUE_SIZE, uint8_t hiCrit1, uint8_t hiCrit2, uint8_t hiCrit3) {
  provides interface PrioCritQueue<queue_t>;
  
  uses {
    interface Queue<queue_t> as prio1Queue;
    interface Queue<queue_t> as prio2Queue;
    interface Queue<queue_t> as prio3Queue;
  }
}

implementation {

  queue_t null_elt;

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

  command queue_t PrioCritQueue.head(error_t * status) {
    *status = SUCCESS;
    if (!(call prio1Queue.empty())) return call prio1Queue.head();
    else {
      if (!(call prio2Queue.empty())) return call prio2Queue.head();
      else {
	if (!(call prio3Queue.empty())) return call prio3Queue.head();
	else {
	  *status = FAIL;
	  return null_elt;
	}
      }
    }
  }

  command queue_t PrioCritQueue.headHI(error_t * status) {
    *status = SUCCESS;
    if (hiCrit1 && !(call prio1Queue.empty())) return call prio1Queue.head();
    else {
      if (hiCrit2 && !(call prio2Queue.empty())) return call prio2Queue.head();
      else {
	if (hiCrit3 && !(call prio3Queue.empty())) return call prio3Queue.head();
	else {
	  *status = FAIL;
	  return null_elt;
	}
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
	if (!(call prio3Queue.empty())) return call prio3Queue.dequeue();
	else return null_elt;
      }
    }
  }

  // If we have no HIs ready here, should we return a LO, since we are going to
  // have to return - or have a parameter to signal returning to LO mode?
  command queue_t PrioCritQueue.dequeueHI() {
    if (hiCrit1 && !(call prio1Queue.empty())) return call prio1Queue.dequeue();
    else {
      if (hiCrit2 && !(call prio2Queue.empty())) return call prio2Queue.dequeue();
      else {
	if (hiCrit3 && !(call prio3Queue.empty())) return call prio3Queue.dequeue();
	else return null_elt;
      }
    }
  }

  command error_t PrioCritQueue.enqueue(queue_t newVal, uint8_t prio) {
    switch (prio) {
    case 1: return (call prio1Queue.enqueue(newVal));
    case 2: return call prio2Queue.enqueue(newVal);
    case 3: return call prio3Queue.enqueue(newVal);
    default: return FAIL;
    }
  }

  command queue_t PrioCritQueue.dequeuePrio(uint8_t prio) {
    switch (prio) {
    case 1: return call prio1Queue.dequeue();
    case 2: return call prio2Queue.dequeue();
    case 3: return call prio3Queue.dequeue();
    default: return null_elt;
    }
  }

  command queue_t PrioCritQueue.headPrio(uint8_t prio) {
    switch (prio) {
    case 1: return call prio1Queue.head();
    case 2: return call prio2Queue.head();
    case 3: return call prio3Queue.head();
    default: return null_elt;
    }
  }

  command uint8_t PrioCritQueue.sizePrio(uint8_t prio) {
    switch (prio) {
    case 1: return call prio1Queue.size();
    case 2: return call prio2Queue.size();
    case 3: return call prio3Queue.size();
    default: return 0; // Return zero if the priority is incorrect
    }
  }

  command void PrioCritQueue.clear() {
    while (call prio1Queue.size() > 0) call prio1Queue.dequeue();
    while (call prio2Queue.size() > 0) call prio2Queue.dequeue();
    while (call prio3Queue.size() > 0) call prio3Queue.dequeue();    
  }
  
  command void PrioCritQueue.clearLO() {
    // Clears out all the LO crit queues
    if (!hiCrit1) { while (call prio1Queue.size() > 0) call prio1Queue.dequeue(); };
    if (!hiCrit2) { while (call prio2Queue.size() > 0) call prio2Queue.dequeue(); };
    if (!hiCrit3) { while (call prio3Queue.size() > 0) call prio3Queue.dequeue(); };
  }

  command uint8_t PrioCritQueue.sizeHI() {
    uint8_t outsize = 0;
    if (hiCrit1) outsize += (call prio1Queue.size());
    if (hiCrit2) outsize += (call prio2Queue.size());
    if (hiCrit3) outsize += (call prio3Queue.size());
    return outsize;
  }

  command uint8_t PrioCritQueue.sizeLO() {
    uint8_t outsize = 0;
    if (!hiCrit1) outsize += (call prio1Queue.size());
    if (!hiCrit2) outsize += (call prio2Queue.size());
    if (!hiCrit3) outsize += (call prio3Queue.size());
    return outsize;
  }
}