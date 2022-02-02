/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int len = nums.size();
        int secondLast = 0, last = nums[0], ans = nums[0];

        for (int i = 2; i <= len; i++)
        {
            ans = max(last, secondLast + nums[i - 1]);
            secondLast = last;
            last = ans;
        }
        return ans;
    }
};
// @lc code=end