#
# @lc app=leetcode id=2 lang=python3
#
# [2] Add Two Numbers
#
from typing import Optional


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
    def addTwoNumbers(
        self, l1: Optional[ListNode], l2: Optional[ListNode]
    ) -> Optional[ListNode]:
        newNode = temp = ListNode()

        carryOver = 0
        while l1 or l2:
            l1Val = l1.val if l1 else 0
            l2Val = l2.val if l2 else 0

            value = l1Val + l2Val + carryOver
            carryOver = value // 10
            temp.next = ListNode(value % 10)

            temp = temp.next
            l1 = l1.next if l1 else l1
            l2 = l2.next if l2 else l2

        if carryOver > 0:
            temp.next = ListNode(carryOver)

        return newNode.next


# @lc code=end
