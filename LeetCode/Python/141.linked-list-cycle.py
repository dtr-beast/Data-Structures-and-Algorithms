#
# @lc app=leetcode id=141 lang=python3
#
# [141] Linked List Cycle
#
from typing import Optional


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None
# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slow = fast = head

        while fast and fast.next:
            if fast is slow:
                return True
            
            slow = slow.next
            fast = fast.next.next

        return False
# @lc code=end

