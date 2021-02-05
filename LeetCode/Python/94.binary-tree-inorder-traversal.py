#
# @lc app=leetcode id=94 lang=python3
#
# [94] Binary Tree Inorder Traversal
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# Inorder Traversal: (In-Between the Order, [LEFT + Value + RIGHT])
# Firstly, traverse to the left subtree and collect value
# Then come back to the root, and collect the root value
# At last, traverse to the right subtree and collect value
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        lst = []
        
        if root is None:
            return lst

        # First, all the left subtrees are traversed
        if root.left:
            lst.extend(self.inorderTraversal(root.left))
        
        # Then, their values are collected
        lst.append(root.val)

        # After then, all the right subtrees are traversed.
        if root.right:
            lst.extend(self.inorderTraversal(root.right))
        
        # At the end of the TreeNode, (No child), the value is returned 
        return lst
# Can be shortened even more,
# We don't have to check if there is child subtree, we can instead just call the method recursively
# and the None check will do the same thing.
#   def inorderTraversal(self, root: TreeNode) -> List[int]:
#        if root is None:
#            return []
#            
#        return self.inorderTraversal(root.left) + [root.val] + self.inorderTraversal(root.right)
# @lc code=end

