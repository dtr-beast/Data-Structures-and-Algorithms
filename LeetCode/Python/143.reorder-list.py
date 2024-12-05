#
# @lc app=leetcode id=143 lang=python3
#
# [143] Reorder List
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
    def reorderList(self, head: Optional[ListNode]) -> None:
        fast = slow = head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        # Reverse the linked list from middle point for backward travelling
        rev_head = self.reverseLinkedList(slow.next)
        slow.next = None
        temp = head

        next = rev_next = None
        while rev_head:
            next = temp.next
            temp.next = rev_head
            rev_next = rev_head.next

            rev_head.next = next
            temp = next
            rev_head = rev_next

        print("Done")

    def reverseLinkedList(self, head: Optional[ListNode]) -> ListNode:
        next = prev = None
        while head:
            next = head.next
            head.next = prev
            prev = head
            head = next

        return prev

# @lc code=end