# @before-stub-for-debug-begin
import re
from python3problem112 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=112 lang=python3
#
# [112] Path Sum
#

# @lc code=start
# Definition for a binary tree node.
# """
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val: int = val
        self.left: Union[TreeNode, None] = left
        self.right: Union[TreeNode, None] = right
# """

class Solution:
    def hasPathSum(self, root: TreeNode, targetSum: int) -> bool:
        if root is None:
            return

        if root.left or root.right:
            return self.hasPathSum(root.left, targetSum - root.val) or self.hasPathSum(root.right, targetSum - root.val)

        return root.val - targetSum == 0 
# @lc code=end