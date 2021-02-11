# @before-stub-for-debug-begin
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=155 lang=python3
#
# [155] Min Stack
#

# @lc code=start
class MinStack:

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.stack = []
        self.minElement = None
        self.secondMinElement = None


    def push(self, x: int) -> None:
        if self.minElement is None:
            self.minElement = [x, 0]
        
        elif self.minElement[0] > x:
            # self.secondMinElement = self.minElement
            self.minElement = [x, len(self.stack)]
        
        self.stack.append(x)


    def pop(self) -> None:
        self.stack.pop()
        if len(self.stack) == self.minElement[1]:
            if self.stack:
                self.minElement = self.findMin()
            else:
                self.minElement = None


    def top(self) -> int:
        return self.stack[-1]


    def getMin(self) -> int:
        return self.minElement[0]
    
    def findMin(self) -> List[int]:
        minElement = [self.stack[0], 0]
        for i in range(1, len(self.stack)):
            if self.stack[i] < minElement[0]:
                minElement = [self.stack[i], i]
        
        return minElement
# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
# @lc code=end
def main():
    obj = MinStack()
    obj.push(-2)
    obj.push(0)
    obj.push(-3)
    print(obj.getMin())
    obj.pop()
    print(obj.top())
    print(obj.getMin())

main()