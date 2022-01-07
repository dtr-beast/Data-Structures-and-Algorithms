/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int max = nums[0];
        int csum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            csum += nums[i];
            if (csum > max)
            {
                max = csum;
            }
            if (csum < 0)
            {
                csum = 0;
            }
        }
        return max;
    }
};

// @lc code=end
