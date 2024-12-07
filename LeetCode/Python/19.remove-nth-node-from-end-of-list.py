#
# @lc app=leetcode id=19 lang=python3
#
# [19] Remove Nth Node From End of List
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
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        # Set the follower 1 node behind so that it is exactly one behind the node to remove  
        dummy = follower = ListNode()
        dummy.next = head
        leader = head
        
        while n > 0:
            n -= 1
            leader = leader.next

        while leader is not None:
            leader = leader.next
            follower = follower.next

        follower.next = follower.next.next

        return dummy.next


# @lc code=end
