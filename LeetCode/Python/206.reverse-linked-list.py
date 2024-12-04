# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


#
# @lc app=leetcode id=206 lang=python3
#
# [206] Reverse Linked List
#

# @lc code=start


class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        if head is None:
            return None

        next = None
        prev = None

        while head:
            next = head.next
            head.next = prev
            prev = head
            head = next

        return prev

    def reverseListRecursive(self, head: ListNode) -> ListNode:
        if head is None:
            return None

        newHead = head
        if head.next:
            newHead = self.reverseListRecursive(head.next)
            head.next.next = head

        head.next = None

        return newHead


# @lc code=end


"""
1 -> 2 -> 3 -> 4 -> 5
All that needs to be done is reverse the arrows, not the actual values

1 <- 2 <- 3 <- 4 -> 5
"""
