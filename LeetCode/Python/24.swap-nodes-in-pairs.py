# @before-stub-for-debug-begin
from python3problem24 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=24 lang=python3
#
# [24] Swap Nodes in Pairs
#
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # i = 0
        dummy = ListNode(0)
        dummy.next = head
        first = False
        tempHead = dummy.next
        while tempHead != None:
            # if i % 2 == 0:
            if tempHead.next != None:
                
                nxt = tempHead.next
                next2 = nxt.next
                nxt.next = tempHead
                tempHead.next = next2

            tempHead = nxt
            # if not first:
                # dummy.next = nxt
                # first = True
          
            tempHead = tempHead.next.next
        
        tempHead = dummy.next
        while tempHead != None:
            print(tempHead.val)
            tempHead = tempHead.next
        return dummy
        
# @lc code=end

