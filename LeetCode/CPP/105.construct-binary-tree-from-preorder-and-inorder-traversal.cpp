/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
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
// TODO: reTODO 11-Oct-2021 11102021
// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
    unordered_map<int, int> imap;
    int pIndex = 0;

    TreeNode *treeBuilder(vector<int> &preorder, int left, int right)
    {
        if (left > right)
        {
            return NULL;
        }

        int rootVal = preorder[pIndex];
        pIndex += 1;

        int rootPos = imap[rootVal];

        TreeNode *root = new TreeNode(rootVal);

        root->left = treeBuilder(preorder, left, rootPos - 1);
        root->right = treeBuilder(preorder, rootPos + 1, right);
        return root;
    }

public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        // Hash indexes (inorder) to beforehand for improved performance
        for (int i = 0; i < inorder.size(); i++)
        {
            imap[inorder[i]] = i;
        }
        return treeBuilder(preorder, 0, preorder.size() - 1);
    }
};
// @lc code=end
