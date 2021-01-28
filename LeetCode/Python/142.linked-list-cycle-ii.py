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
        if head is None or head.next is None:
            return None

        slowHead = head
        fastHead = head.next

        try:
            while slowHead and fastHead:
                if slowHead == fastHead.next:
                    return slowHead

                slowHead = slowHead.next
                fastHead = fastHead.next.next
        except AttributeError:
            return None

# @lc code=end

