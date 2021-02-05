#
# @lc app=leetcode id=430 lang=python3
#
# [430] Flatten a Multilevel Doubly Linked List
#
# TODO
# @lc code=start
"""
# Definition for a Node.
class Node:
    def __init__(self, val, prev, next, child):
        self.val = val
        self.prev = prev
        self.next = next
        self.child = child
"""


class Solution:
    def flatten(self, head: 'Node') -> 'Node':
        dummy = tempHead = head
        while tempHead.next:
            if tempHead.child:
                childNodeFoot = self.flatten(tempHead.child)
                childNodeFoot.next = tempHead.next
                tempHead.next = tempHead.child
                tempHead.child = None

            tempHead = tempHead.next
        
        return tempHead
    
    def printList(self, foot):
        while foot:
            print(foot.val)
            foot = foot.prev

# @lc code=end
