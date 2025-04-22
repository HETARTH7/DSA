class Stack:
    def __init__(self, cap):
        self.stack = []
        self.capacity = cap

    # Time Complexity: O(1)
    def push(self, value):
        if len(self.stack) == self.capacity:
            print("Stack is full")
        else:
            self.stack.append(value)

    # Time Complexity: O(1)
    def pop(self):
        if not len(self.stack):
            print("Stack is Empty")
        else:
            self.stack.pop(-1)

    # Time Complexity: O(1)
    def isEmpty(self):
        return not len(self.stack)

    # Time Complexity: O(1)
    def isFull(self):
        return len(self.stack) == self.capacity

    # Time Complexity: O(1)
    def peek(self):
        if not len(self.stack):
            print("Stack is Empty")
        else:
            print(self.stack[-1])


newStack = Stack(5)
print(newStack.stack)
