/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int len = nums.size();
        set<multiset<int>> s;

        for (int i = 0; i < len; i++)
        {
            map<int, int> m;
            for (int j = i + 1; j < len; j++)
            {
                int findNum = 0 - (nums[i] + nums[j]);
                if (m.count(findNum))
                {
                    if (m[findNum] == i || m[findNum] == j)
                        continue;

                    multiset<int> ans = {nums[i], nums[j], findNum};

                    s.insert(ans);
                }
                m[nums[j]] = j;
            }
        }
        vector<vector<int>> arr;
        for (auto ms : s)
        {
            arr.push_back(vector<int>(ms.begin(), ms.end()));
        }
        return arr;
    }
};
// @lc code=end
