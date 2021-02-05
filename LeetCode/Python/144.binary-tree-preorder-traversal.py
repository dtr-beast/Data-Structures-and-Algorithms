# @before-stub-for-debug-begin
from python3problem144 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=144 lang=python3
#
# [144] Binary Tree Preorder Traversal
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
# Preorder Traversal: (Preceding the order [Value + LEFT + RIGHT])
# Collect values WHILE traversing the tree.
# First, Traverse to the left subtree,
# Second, Traverse to the right subtree.
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        lst = []
        
        if root is None:
            return lst

        # First, collect the value
        lst.append(root.val)

        # Traverse the left subtrees recursively (Until there are no more left subtrees)
        if root.left:
            lst.extend(self.preorderTraversal(root.left))
        # Traverse the right subtrees
        if root.right:
            lst.extend(self.preorderTraversal(root.right))
        
        return lst
# Can be shortened even more,
# We don't have to check if there is child subtree, we can instead just call the method recursively
# and the None check will do the same thing.
#   def preorderTraversal(self, root: TreeNode) -> List[int]:
#        if root is None:
#            return []
#
#        return [root.val] + self.preorderTraversal(root.left) + self.preorderTraversal(root.right)
# @lc code=end