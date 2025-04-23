class Queue:
    def __init__(self, cap):
        self.q = [-1]*cap
        self.capacity = cap
        self.front = -1
        self.last = -1

    # Time Complexity: O(1)
    def enqueue(self, value):
        if self.last-self.front+1 == self.capacity:
            print("Queue is full")
        elif self.front == -1:
            self.front = 0
            self.last = 0
            self.q[0] = value
        else:
            self.last += 1
            self.q[self.last] = value

    # Time Complexity: O(capacity) -> This can be constant if we use linked list where it is possible to remove any corner end in O(1) time.
    def dequeue(self):
        if self.front == -1:
            print("Queue is empty")
        else:
            frontVal = self.q[0]
            for i in range(self.last):
                self.q[i] = self.q[i+1]
            self.q[self.last] = -1
            self.last -= 1
            print(frontVal)

    # Time Complexity: O(1)
    def isEmpty(self):
        return self.front == -1

    # Time Complexity: O(1)
    def isFull(self):
        return self.last-self.front+1 == self.capacity

    # Time Complexity: O(1)
    def peek(self):
        return self.q[0]


newQueue = Queue(2)
newQueue.enqueue(1)
newQueue.enqueue(2)
print(newQueue.q)
newQueue.dequeue()
print(newQueue.q)
newQueue.dequeue()
print(newQueue.q)
