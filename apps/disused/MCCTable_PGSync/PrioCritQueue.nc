/**
 *  Interface to a priority queue that contains items
 *  of multiple priority levels. The queue has a maximum size.
 *
 *  @author James Harbin
 *  @date   $Date: 2017-08-31 03:00:31 $
 */
  
interface PrioCritQueue<t> {

  /**
   * Returns if the queue is empty.
   *
   * @return Whether the queue is empty.
   */
  command bool empty();

  /**
   * Returns if the queue is full.
   *
   * @return Whether the queue is full.
   */
  command bool full();

  /**
   * The number of elements currently in the queue.
   * Always less than or equal to maxSize().
   *
   * @return The number of elements in the queue.
   */
  command uint8_t size();

  // Size at a given priority level
  command uint8_t sizePrio(uint8_t prio);

  /**
   * The maximum number of elements the queue can hold.
   *
   * @return The maximum queue size.
   */
  command uint8_t maxSize();

  /**
   * Get the head of the queue without removing it. If the queue
   * is empty, the return value is undefined. q_status is a pointer
   * to an error_t to set as SUCCESS or FAIL depending on whether
   * there was anything returned
   *
   * @return 't ONE' The head of the queue.
   */
  command t head(error_t * q_status);

  // Like head() but only returns HI crit packets
  command t headHI(error_t * q_status);

  /**
   * Get the head of the queue of a particular priority without
   * removing it. If that queue is empty, the return value is
   * undefined.
   *
   * @return 't ONE' The head of the queue.
   */
  command t headPrio(uint8_t prio);

  /**
   * Remove the head of the queue. If the queue is empty, the return
   * value is undefined.
   *
   * @return 't ONE' The head of the queue.
   */
  command t dequeue();


  // Like dequeue but only returns HI
  command t dequeueHI();

  /**
   * Remove the head of the queue of particular priority. If that queue
   * is empty, the return value is undefined.
   *
   * @return 't ONE' The head of the queue.
   */
  command t dequeuePrio(uint8_t prio);

  /**
   * Enqueue an element to the tail of the queue.
   *
   * @param 't ONE newVal' - the element to enqueue
   * @return SUCCESS if the element was enqueued successfully, FAIL
   *                 if it was not enqueued.
   */
  command error_t enqueue(t newVal, uint8_t prio);

   // Clears all the contents of the LO crit queues
  command void clearLO();

  // Clears all the contents of every individual queue
  command void clear();

  // The number of HI crit packets currently in the queue
  command uint8_t sizeHI();
}
