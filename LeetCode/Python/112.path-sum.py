# @before-stub-for-debug-begin
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
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val: int = val
#         self.left: Union[TreeNode, None] = left
#         self.right: Union[TreeNode, None] = right
    
class Solution:
    def checkPathSum(self, root: TreeNode, targetSum: int, currentSum: int) -> bool:
        if root is None:
            return 0
        
        if root.left and root.right:
            return self.checkPathSum(root.left, targetSum, )


        if root.val + currentSum == targetSum:
            return True

        # leftList = self.checkPathSum(root.left)[1::] + [self.checkPathSum(root.left)[0] + root.val]
        # rightList = self.checkPathSum(root.right)[1::] + [self.checkPathSum(root.right)[0] + root.val]

        # return leftList + rightList
        # return self.checkPathSum(root.left) + self.checkPathSum(root.right) 
        pass

    def hasPathSum(self, root: TreeNode, targetSum: int) -> bool:
        if root is None:
            return False

        lst = self.checkPathSum(root, targetSum)
        print(lst) 
        ans = targetSum in lst
        print(ans)
        return ans
# @lc code=end