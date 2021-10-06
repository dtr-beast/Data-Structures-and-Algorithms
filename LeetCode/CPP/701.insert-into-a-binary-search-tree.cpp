/*
 * @lc app=leetcode id=701 lang=cpp
 *
 * [701] Insert into a Binary Search Tree
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
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        // Record the address of the root Node
        TreeNode **cur = &root;
        // Value at cur
        while (*cur != NULL)
        {
            if ((*cur)->val > val)
            {
                // Cur is assigned a new address of the left child node
                cur = &(*cur)->left;
            }
            else
            {
                // Cur is assigned a new address of the right child node
                cur = &(*cur)->right;
            }
        }
        // Cur has an address of nullptr, which is right/left of node
        *cur = new TreeNode(val);
        return root;
    }
};
// @lc code=end

/*
class Solution
{
public:
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        if (root == NULL)
        {
            root = new TreeNode(val);
            return root;
        }
        TreeNode *tempNode = root;
        TreeNode *insertNode = new TreeNode(val);
        TreeNode *parentNode = root;
        while (tempNode != NULL)
        {
            parentNode = tempNode;
            if (tempNode->val > val)
            {
                tempNode = tempNode->left;
            }
            else
            {
                tempNode = tempNode->right;
            }
        }
        if (parentNode->val > val)
        {
            parentNode->left = insertNode;
        }
        else
        {
            parentNode->right = insertNode;
        }
        return root;
    }
};
*/