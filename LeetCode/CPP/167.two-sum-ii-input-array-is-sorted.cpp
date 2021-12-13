#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &n, int target)
    {
        map<int, int> num;
        for (int i = 0; i < n.size(); i++)
        {
            if (num[target - n[i]] != 0)
            {
                return {num[target - n[i]], i + 1};
            }
            num[n[i]] = i + 1;
        }
        return {-1, -1};
    }
};
// @lc code=end
