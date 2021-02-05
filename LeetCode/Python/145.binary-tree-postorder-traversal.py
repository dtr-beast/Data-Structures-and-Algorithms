#
# @lc app=leetcode id=145 lang=python3
#
# [145] Binary Tree Postorder Traversal
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# Postorder Traversal: (Post the order [LEFT + RIGHT + Value])
# First, traverse to the left subtree, (Recursively, until there are not left subtrees)
# Collect the value
# Then, traverse to the right subtree,
# Collect the value,
# Finally, collect the value of the root 

class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        lst = []
        
        if root is None:
            return lst

        # First, all the left subtrees are traversed.
        if root.left:
            lst.extend(self.postorderTraversal(root.left))
        # After then, all the right subtrees are traversed.
        if root.right:
            lst.extend(self.postorderTraversal(root.right))
        
        # At the end of the TreeNode, (No child), the value is returned 
        lst.append(root.val)
        return lst

# Can be shortened even more,
# We don't have to check if there is child subtree, we can instead just call the method recursively
# and the None check will do the same thing.
#    def postorderTraversal(self, root: TreeNode) -> List[int]:
#        if root == None:
#            return []
#
#        return self.postorderTraversal(root.left) + self.postorderTraversal(root.right) + [root.val]
# @lc code=end