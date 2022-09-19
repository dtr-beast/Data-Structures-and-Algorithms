/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int xor_val = 1;
        int ans = 0;
        for (int num : nums)
        {
            ans = ans xor num;
        }
        for (int i = 1; i < nums.size(); i++) {
            ans = ans xor i;
        }
        return ans;
    }
};
// @lc code=end
