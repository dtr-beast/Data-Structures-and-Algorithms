#
# @lc app=leetcode id=430 lang=python3
#
# [430] Flatten a Multilevel Doubly Linked List
#
# TODO: Convert to Java
# @lc code=start

# Definition for a Node.
"""
class Node:
    def __init__(self, val, prev = None, next = None, child = None):
        self.val = val
        self.prev = prev
        self.next = next
        self.child = child
"""

class Solution:
    def helper_flatten(self, head: 'Node') -> 'Node':
        if head is None:
            return None
        
        while head:
            # First, check if there is a child
            if head.child:
                # This will return the last node of the child list (recursively)
                last = self.helper_flatten(head.child)

                # Temporarily store the next node 
                next = head.next
                    
                # Replace the next node with the child node
                head.next = head.child
                head.child.prev = head

                # Connect the last flattened node with previously called 'next' node
                last.next = next
                
                if next:
                    next.prev = last
                
                # Remove the child
                head.child = None

                # Since a child was encountered and has now been flattened,
                # we can move right onto the last node
                head = last

            elif head.next:
                head = head.next
            else:
                return head
    

    def flatten(self, head: 'Node') -> 'Node':
        self.helper_flatten(head)
        return head
# @lc code=end
   
    def print_list(self, head: 'Node'):
        while head:
            print(head.val)
            head = head.next

# DEBUGGING CODE

# def main():
#     _1 = Node(1)
#     _2 = Node(2)
#     _3 = Node(3)
#     _4 = Node(4)
#     _5 = Node(5)
#     _6 = Node(6)
#     _7 = Node(7)
#     _8 = Node(8)
#     _9 = Node(9)
#     _10 = Node(10)
#     _11 = Node(11)
#     _12 = Node(12)

#     _1.next = _2; _2.prev = _1
#     _2.next = _3; _3.prev = _2
#     _3.next = _4; _4.prev = _3; _3.child = _7
#     _4.next = _5; _5.prev = _4
#     _5.next = _6; _6.prev = _5
    
#     _7.next = _8; _8.prev = _7
#     _8.next = _9; _9.prev = _8; _8.child = _11
#     _9.next = _10; _10.prev = _9

#     _11.next = _12; _12.prev = _11
#     Solution().flatten(_1)

#     Solution().print_list(_1)
#     # for i in range(1, 13):
#         # print(f'_{i} = Node({i})')


# main()