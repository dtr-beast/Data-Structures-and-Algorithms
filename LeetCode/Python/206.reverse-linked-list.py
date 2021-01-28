# @before-stub-for-debug-begin
from python3problem206 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=206 lang=python3
#
# [206] Reverse Linked List
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

# TODO: Improve
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        if head == None:
            return None

        nodes = []
        tempHead = head
        while tempHead:
            nodes.append(tempHead)
            tempHead = tempHead.next

        nodes.reverse()

        for i in range(len(nodes) - 1):
            nodes[i].next = nodes[i + 1]

        nodes[-1].next = None 
        
        return nodes[0]
         
           
        # tempHead = head
        # while tempHead.next:
        #     # tempHead.next = tempHead.next.next
        #     head = tempHead.next
        #     tempHead.next = head.next
        #     head.next = tempHead
        #     # head.next = tempHead.next
        #     # tempHead.next = 

# @lc code=end

