# @before-stub-for-debug-begin
from python3problem234 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=234 lang=python3
#
# [234] Palindrome Linked List
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# TODO: Do in O(1) Space and O(n) time
class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        nodeLst = []

        tempHead = head
        while tempHead:
            nodeLst.append(tempHead.val)
            tempHead = tempHead.next


        lstLen = len(nodeLst)
        for i in range(lstLen // 2):
            if nodeLst[i] != nodeLst[lstLen - i - 1]:
                return False
        return True

    
# @lc code=end

