/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
 */
#include <vector>
using namespace std;
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
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> nodes;

        traveller(root, nodes);

        return nodes;
    }
    void traveller(TreeNode *root, vector<int> &nodes)
    {
        if (root == nullptr)
        {
            return;
        }

        traveller(root->left, nodes);
        nodes.push_back(root->val);
        traveller(root->right, nodes);
    }
};
// @lc code=end