#
# @lc app=leetcode id=138 lang=python3
#
# [138] Copy List with Random Pointer
#

from typing import Optional


class Node:
    def __init__(self, x: int, next: "Node" = None, random: "Node" = None):
        self.val = int(x)
        self.next = next
        self.random = random


# @lc code=start
"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""


# TODO: Try again yourself
class Solution:
    nodeDict = {}

    def copyRandomList(self, head: "Optional[Node]") -> "Optional[Node]":
        deepCopyDummy = deepTemp = Node(0)
        temp = head

        while temp is not None:
            n = self.getDefault(temp, temp.val)

            if temp.random is not None:
                rn = self.getDefault(temp.random, temp.random.val)
                n.random = rn

            deepTemp.next = n
            deepTemp = deepTemp.next
            temp = temp.next

        return deepCopyDummy.next

    def getDefault(self, val: "Node", value=0):
        if val not in self.nodeDict:
            n = Node(value)
            self.nodeDict[val] = n

        return self.nodeDict[val]


# @lc code=end
