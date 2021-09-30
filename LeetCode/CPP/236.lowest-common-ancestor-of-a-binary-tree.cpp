/*
 * @lc app=leetcode id=236 lang=cpp
 *
 * [236] Lowest Common Ancestor of a Binary Tree
 */
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
    TreeNode *lca;
    bool lcaFound = false;
    int pNode, qNode;

public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == NULL)
        {
            return root;
        }
        pNode = p->val;
        qNode = q->val;
        findAncestor(root);
        return lca;
    }
    bool findAncestor(TreeNode *root)
    {
        if (root == NULL)
        {
            return false;
        }

        // Check if left has any of the given node
        int ifLeftHasValue = findAncestor(root->left);
        
        // Check if right has any of the given node
        int ifRightHasValue = findAncestor(root->right);

        // Check if the current Node is any of the given node
        int ifIHaveValue = (root->val == pNode) + (root->val == qNode);

        // If any two conditions are true (mid is q/p), (left has q/p), (right has q/p)
        // ? Why only two conditions - because if left and right subtrees have the value, then mid cant be any of them... 
        // ? and if mid and left have values, then right cant have anything... and so on
        if (ifIHaveValue + ifLeftHasValue + ifRightHasValue == 2)
        {
            lca = root;
        }
        return (ifIHaveValue + ifLeftHasValue + ifRightHasValue) >= 1;
    }
};
// @lc code=end
