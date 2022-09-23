/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int len = nums.size();
        vector<int> left(len), right(len);

        int i = 0;
        left[i] = nums[i];
        right[len - i - 1] = nums[len - i - 1];

        for (int i = 1; i < len; i++)
        {
            left[i] = left[i - 1] + nums[i];
            right[len - i - 1] = right[len - i] + nums[len - i - 1];
        }
        for (int i = 0; i < len; i++)
        {
            if (left[i] == right[i])
            {
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end