// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem102.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
 */
#include <bits/stdc++.h>
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

// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> arr;
        queue<TreeNode *> q;
        if (root == nullptr)
        {
            return arr;
        }
        q.push(root);

        while (!q.empty())
        {
            vector<int> v;
            int level = q.size();
            for (int i = 0; i < level; i++)
            {
                v.push_back(q.front()->val);
                if (q.front()->left)
                {
                    q.push(q.front()->left);
                }
                if (q.front()->right)
                {
                    q.push(q.front()->right);
                }
                q.pop();
            }
            arr.push_back(v);
        }
        return arr;
    }
};
// @lc code=end