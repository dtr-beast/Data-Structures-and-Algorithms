#
# @lc app=leetcode id=141 lang=python3
#
# [141] Linked List Cycle
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        if head is None or head.next is None:
            return False

        slowHead = head
        fastHead = head.next

        try:
            while slowHead and fastHead:
                if slowHead == fastHead:
                    return True

                slowHead = slowHead.next
                fastHead = fastHead.next.next
        except AttributeError:
            return False


# @lc code=end