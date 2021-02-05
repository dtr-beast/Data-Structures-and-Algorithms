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
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
# TODO: Implement
class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        lst = []
        
        if root is None:
            return lst
        
        lst.append([root.left.val, root.right.val] + self.levelOrder(root.right) + self.levelOrder(root.right))
        return lst


# @lc code=end