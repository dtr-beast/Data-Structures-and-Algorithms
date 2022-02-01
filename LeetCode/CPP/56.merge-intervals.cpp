/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> ans;
        pair<int, int> interval;

        for (int i = 0; i < intervals.size(); i++)
        {
            vector<int> lans;

            int cstart = intervals[i][0];
            int cend = intervals[i][1];

            for (int j = i + 1; j < intervals.size(); j++)
            {
                if (cend > intervals[j][0])
                {
                    cend = max(cend, intervals[j][1]);
                }
            }
            ans.push_back({cstart, cend});
        }
        return ans;
    }
};
// @lc code=end
