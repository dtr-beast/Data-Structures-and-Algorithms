/*
 * @lc app=leetcode id=297 lang=cpp
 *
 * [297] Serialize and Deserialize Binary Tree
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
// TODO: DeSerialize Data
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

class Codec
{
    bool rootNode = true;

public:
    string serialHelper(TreeNode *root)
    {
        string s = "";
        if (root == NULL)
        {
            return "n";
        }
        if (rootNode)
        {
            rootNode = false;
            s += to_string(root->val);
        }
        if (root->left)
        {
            s += to_string(root->left->val);
        }
        if (root->right)
        {
            s += to_string(root->right->val);
        }
        return s + serialHelper(root->left) + serialHelper(root->right);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        string s = serialHelper(root);
        int len = s.size() - 1;
        while (len > 1 && s[len--] == 'n')
        {
            s.pop_back();
        }

        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        cout << data;
        return new TreeNode(5);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
// @lc code=end