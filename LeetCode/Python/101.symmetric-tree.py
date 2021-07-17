# @before-stub-for-debug-begin
from python3problem101 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=101 lang=python3
#
# [101] Symmetric Tree
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right



class Solution:
    def checkSymmetry(self, leftHead: TreeNode, rightHead: TreeNode) -> bool:
        if leftHead is None and rightHead is None:
            return True
        elif leftHead is None or rightHead is None:
            return False

        return (leftHead.val == rightHead.val) and self.checkSymmetry(leftHead.right, rightHead.left) and self.checkSymmetry(leftHead.left, rightHead.right)

    def isSymmetric(self, root: TreeNode) -> bool:
        if root is None:
            return True

        return self.checkSymmetry(root.left, root.right)
# @lc code=end
