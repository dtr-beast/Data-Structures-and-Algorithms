# @before-stub-for-debug-begin
from python3problem328 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=328 lang=python3
#
# [328] Odd Even Linked List
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next


class Solution:
    def oddEvenList(self, head: ListNode) -> ListNode:
        if head is None:
            return None

        oddNode = head
        evenNode = evenNodeHolder = head.next

        while evenNode and evenNode.next:
            oddNode.next = evenNode.next
            oddNode = oddNode.next

            evenNode.next = oddNode.next
            evenNode = evenNode.next

        oddNode.next = evenNodeHolder

        return head
# @lc code=end
