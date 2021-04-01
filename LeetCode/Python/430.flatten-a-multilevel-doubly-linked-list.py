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
    def return_end(self, head: 'Node') -> 'Node':
        if head is None:
            return None

        while head.next:
            if head.child:
                child_foot = self.return_end(head.child)
                child_foot.next = head.next
                head.next.prev = child_foot
                head.next = head.child
                head.child = None
                
            head = head.next
        
        return head

    def flatten(self, head: 'Node') -> 'Node':
        if head is None:
            return None
        
        dummy = temp_head = head
        # if temp_head.child:
        #     return temp_head + self.flatten(temp_head.child)
        
        # if temp_head.next:
        #     return self.flatten(temp_head.next)
        

        while temp_head.next:
            if temp_head.child:
                # return self.flatten(temp_head.child)
                child_node_foot = self.flatten(temp_head.child)
                child_node_foot.next = temp_head.next
                temp_head.next = temp_head.child
                temp_head.child = None

            temp_head = temp_head.next
        
        return temp_head
    
    def print_list(self, foot):
        while foot:
            print(foot.val)
            foot = foot.prev

# @lc code=end
