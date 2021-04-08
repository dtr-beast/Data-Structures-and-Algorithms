# @before-stub-for-debug-begin
from python3problem102 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=102 lang=python3
#
# [102] Binary Tree Level Order Traversal
#

# @lc code=start
# Definition for a binary tree node.
# """
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
# """
# TODO: Implement
class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        if root is None:
            return
        
        queue = [root]
        lst = [[root]]
        
        temp_root = root
        run = 1
        while queue:
            temp_queue = []
            
            if queue[0].left:
                queue.append(queue[0].left)
                temp_queue.append(queue[0].left)
            
            if queue[0].right:
                queue.append(queue[0].right)
                temp_queue.append(queue[0].right)
            
            lst.append(temp_queue)
            queue.pop(0)
            # if temp_root.left:
            #     queue.append(temp_root.left)
            
            # if temp_root.right:
            #     queue.append(temp_root.right)
        
        # lst.append([root.left.val, root.right.val] + self.levelOrder(root.right) + self.levelOrder(root.right))
        # print(lst)
        return lst


# @lc code=end