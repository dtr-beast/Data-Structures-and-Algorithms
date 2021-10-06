/*
 * @lc app=leetcode id=173 lang=cpp
 *
 * [173] Binary Search Tree Iterator
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
// TODO: Improve (After 20/10/2021)
class BSTIterator
{
    vector<int> inorderArr;
    int current;
    void createArray(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }

        createArray(root->left);

        inorderArr.push_back(root->val);

        createArray(root->right);
    }

public:
    BSTIterator(TreeNode *root)
    {
        createArray(root);
        current = 0;
    }

    int next()
    {
        return inorderArr[current++];
    }

    bool hasNext()
    {
        return (inorderArr.size() - current) != 0;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
// @lc code=end