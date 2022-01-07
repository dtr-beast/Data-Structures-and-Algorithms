/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> unique_set;
        for (int i = 0; i < nums.size(); i++)
        {
            if (unique_set[nums[i]] == 0)
            {
                unique_set[nums[i]] = 1;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end
