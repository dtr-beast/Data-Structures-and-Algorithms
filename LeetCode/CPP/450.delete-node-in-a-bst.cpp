// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem450.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=450 lang=cpp
 *
 * [450] Delete Node in a BST
 */
// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
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
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        TreeNode **cur = &root;
        while (*cur != NULL)
        {
            if ((*cur)->val == key)
            {
                break;
            }

            if ((*cur)->val > key)
            {
                *cur = (*cur)->left;
            }
            else
            {
                *cur = (*cur)->right;
            }
        }
        if (*cur == nullptr)
        {
            return root;
        }
        if ((*cur)->left == NULL && (*cur)->right == NULL)
        {
            delete (*cur);
        }
        else if ((*cur)->left != NULL && (*cur)->right != NULL)
        {
            TreeNode **inorder = &(*cur)->right;
            while ((*inorder)->left != NULL)
            {
                *inorder = (*inorder)->left;
            }
            *cur = *inorder;
            (*inorder)->left == nullptr;
        }
        else
        {
            *cur = (*cur)->left ? (*cur)->left : (*cur)->right;
        }
        return root;
    }
};
// @lc code=end