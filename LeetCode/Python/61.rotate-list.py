# @before-stub-for-debug-begin
from python3problem61 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=61 lang=python3
#
# [61] Rotate List
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

# TODO: Improve (Your runtime beats 8.68 % of python3 submissions)
class Solution:
    def printList(self, head):
        while head:
            print(head.val)
            head = head.next

    def rotateRight(self, head: ListNode, k: int) -> ListNode:
        if head is None:
            return None
        # tempHead = head
        # temp = k

        # dummyNode = ListNode(0)
        # dummyNode.next = head
        
        # leader = follower = dummyNode
        
        # while temp and leader.next:
        #     leader = leader.next
        #     temp -= 1
        #     if leader.next


        # dummyNode = ListNode(0)
        # dummyNode.next = head

        tempHead = head
        nodeList = []
        while tempHead:
            nodeList.append(tempHead)
            tempHead = tempHead.next
        
        k %= len(nodeList)

        if k:
            nodeList[-(k + 1)].next = None
            nodeList[-1].next = nodeList[0]
        
        return nodeList[-k]


        # for _ in range(k):
        #     leader = leader.next

        # while leader.next:
        #     leader = leader.next
        #     follower = follower.next

        # head = follower.next
        # leader.next = dummyNode.next
        # follower.next = None
        # print('')

        # return head
# @lc code=end
