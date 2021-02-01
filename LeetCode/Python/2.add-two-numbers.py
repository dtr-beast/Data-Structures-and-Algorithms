# @before-stub-for-debug-begin
from python3problem2 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=2 lang=python3
#
# [2] Add Two Numbers
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# TODO: Improve
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        s1 = s2 =  ''

        while l1:
            s1 = str(l1.val) + s1
            l1 = l1.next
        
        while l2:
            s2 = str(l2.val) + s2
            l2 = l2.next

        s3 = str(int(s1) + int(s2))
        head = lst = ListNode(0)
        
        for i in s3[::-1]:
            lst.next = ListNode(int(i))
            lst = lst.next

        return head.next
# @lc code=end