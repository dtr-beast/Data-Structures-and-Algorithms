#
# @lc app=leetcode id=160 lang=python3
#
# [160] Intersection of Two Linked Lists
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# TODO: Improve
class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        ListA = [headA]
        ListB = [headB]

        tempHeadA = headA
        tempHeadB = headB

        while tempHeadA:
            tempHeadA = tempHeadA.next
            ListA.append(tempHeadA)

        while tempHeadB:
            tempHeadB = tempHeadB.next
            ListB.append(tempHeadB)
        
        x = None
        for (a, b) in list(zip(ListA[::-1], ListB[::-1])):
            if a == b:
                x = a
            else:
                return x

        return x

         
# @lc code=end
