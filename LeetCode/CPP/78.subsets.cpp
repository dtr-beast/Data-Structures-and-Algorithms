/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    void makeSubsets(vector<vector<int>> &ans, vector<int> &nums, vector<int> &curr, int i = 0)
    {
        if (i == nums.size())
            return ans.push_back(curr);

        // Push the value and make a subset with the current value
        curr.push_back(nums[i]);
        makeSubsets(ans, nums, curr, i + 1);
        // Pop the value and make a subset without the current value
        curr.pop_back();
        makeSubsets(ans, nums, curr, i + 1);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> curr;
        makeSubsets(ans, nums, curr);
        return ans;
    }
};
// @lc code=endl̥