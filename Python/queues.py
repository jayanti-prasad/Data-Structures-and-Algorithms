class ArrayQueue:
    DEFAULT_CAPACITY = 10 
    # moderate capacity for all new queues

    def __init__ (self):
        self.data = [None] *  ArrayQueue.DEFAULT_CAPACITY
        self.size = 0
        self.front = 0

    def len (self):
        return self.size

    def is_empty(self):
        return self.size == 0

    def first(self):
        if self.is_empty( ):
           raise Empty("Queue is empty")
        return self.data[self.front]


    def dequeue(self):
        # Remove and return the first element of the queue (i.e., FIFO).
        # Raise Empty exception if the queue is empty.
        if self.is_empty( ):
           raise Empty("Queue is empty")
        answer = self.data[self.front]
        self.data[self.front] = None # help garbage collection
        self.front = (self.front + 1) % len(self.data)
        self.size -= 1
        return answer

    def enqueue(self, e):
       # ”””Add an element to the back of queue.”””
       if self.size == len(self.data):
          self.resize(2 * len(self.data)) # double the array size
       avail = (self.front + self.size) % len(self.data)
       print("avail:",avail)
       self.data[avail] = e
       self.size += 1

    def resize(self, cap): # we assume cap >= len(self)
       #  ”””Resize to a new list of capacity >= len(self).”””
       old = self.data # keep track of existing list
       self.data = [None] * cap # allocate list with new capacity
       walk = self.front
       for k in range(self.size): # only consider existing elements
           self.data[k] = old[walk] # intentionally shift indices
           walk = (1 + walk) % len(old) # use old size as modulus
       self.front = 0


if __name__ == "__main__":

    Q = ArrayQueue() 
    Q.enqueue("A")


    Q.enqueue("B")
    #Q.enqueue("C")
    #Q.enqueue("D")
    #Q.enqueue("E")
    #Q.enqueue("F")

    #print(Q.first(), Q.len())
    #Q.dequeue()
       
    print(Q.first(), Q.len())
