# @before-stub-for-debug-begin
from python3problem203 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=203 lang=python3
#
# [203] Remove Linked List Elements
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: ListNode, val: int) -> ListNode:
        dummyHead = ListNode(0)
        dummyHead.next = head
        tempHead = dummyHead

        while tempHead and tempHead.next:
            if tempHead.next.val == val:
                tempHead.next = tempHead.next.next
                continue
            
            tempHead = tempHead.next
        
        return dummyHead.next

# @lc code=end

