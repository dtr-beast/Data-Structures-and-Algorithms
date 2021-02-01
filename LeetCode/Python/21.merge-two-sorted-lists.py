# @before-stub-for-debug-begin
from python3problem21 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=21 lang=python3
#
# [21] Merge Two Sorted Lists
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        # Dummy Node for edge cases (Null Nodes)
        dummyNode = lst = ListNode(0)

        while l1 and l2:
            if l1.val < l2.val:
                lst.next = l1
                l1 = l1.next
            
            else:
                lst.next = l2
                l2 = l2.next
            
            lst = lst.next
        
        # Since we know the above while loop ended because of any one node becoming empty
        # We can directly assign the other node to the list
        lst.next = l1 or l2
     
        return dummyNode.next
        
# @lc code=end

