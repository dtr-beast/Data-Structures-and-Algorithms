# @before-stub-for-debug-begin
from python3problem142 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=142 lang=python3
#
# [142] Linked List Cycle II
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
# TODO: 11/16
class Solution:
    def detectCycle(self, head: ListNode) -> ListNode:
        # if head is None or head.next is None:
            # return None
        try:
            slow_head = head
            fast_head = head.next
            while slow_head and fast_head:
                if slow_head == fast_head.next:
                    return slow_head

                slow_head = slow_head.next
                fast_head = fast_head.next.next
        except AttributeError:
            return None

# @lc code=end