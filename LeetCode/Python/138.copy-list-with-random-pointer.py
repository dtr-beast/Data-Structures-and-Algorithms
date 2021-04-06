# @before-stub-for-debug-begin
from python3problem138 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=138 lang=python3
#
# [138] Copy List with Random Pointer
#
# TODO: Improve
# @lc code=start
# """
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
# """

class Solution:
    def copyRandomList(self, head: 'Node') -> 'Node':
        if head is None:
            return

        new_head = temp_new_head = Node(-1)
        temp_head = head
        old_node_list = []
        new_node_list = []
        
        while temp_head:
            temp_new_head.next = Node(temp_head.val)

            old_node_list.append(temp_head)
            temp_head = temp_head.next
            
            temp_new_head = temp_new_head.next
            new_node_list.append(temp_new_head)
            
        
        temp_head = head
        lst_len = len(new_node_list)

        for i in range(lst_len):
            if old_node_list[i].random:
                for j in range(lst_len):
                    if old_node_list[i].random is old_node_list[j]:
                        new_node_list[i].random = new_node_list[j]
                        break
        
        return new_head.next

    
    def print_list(self, head: 'Node'):
        while head:
            print(head.val)
            head = head.next
    
    def node_list_val(self, lst: List[Node]):
        for i in lst:
            print(i.val, end=" ")
        
        print()
# @lc code=end
