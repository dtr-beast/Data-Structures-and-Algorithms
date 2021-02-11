# @before-stub-for-debug-begin
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=622 lang=python3
#
# [622] Design Circular Queue
#

# @lc code=start
class MyCircularQueue:

    def __init__(self, k: int):
        self.capacity: int = k
        self.size: int = 0
        self.head: int = 0
        self.tail: int = -1
        self.Queue: List[int] = [0] * self.capacity


    def enQueue(self, value: int) -> bool:
        if self.isFull():
            return False

        self.tail = (self.tail + 1) % self.capacity
        self.Queue[self.tail] = value
        self.size += 1
        
        return True


    def deQueue(self) -> bool:
        if self.isEmpty():
            return False

        self.head += 1
        self.head %= self.capacity
        self.size -= 1
        return True


    def Front(self) -> int:
        return self.Queue[self.head] if not self.isEmpty() else -1


    def Rear(self) -> int:
        return self.Queue[self.tail] if not self.isEmpty() else -1


    def isEmpty(self) -> bool:
        return not self.size


    def isFull(self) -> bool:
        return self.size == self.capacity


# Your MyCircularQueue object will be instantiated and called as such:
# obj = MyCircularQueue(k)
# param_1 = obj.enQueue(value)
# param_2 = obj.deQueue()
# param_3 = obj.Front()
# param_4 = obj.Rear()
# param_5 = obj.isEmpty()
# param_6 = obj.isFull()
# @lc code=end