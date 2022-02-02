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
    vector<vector<int>> merge(vector<vector<int>> &ins)
    {

        vector<vector<int>> ans;
        sort(ins.begin(), ins.end(), [](vector<int> &a, vector<int> &b)
             { return a[0] < b[0]; });

        int cstart = ins[0][0];
        int cend = ins[0][1];
        for (int i = 0; i < ins.size() - 1;)
        {
            if (cend >= ins[i + 1][0])
            {
                cend = max(cend, ins[i + 1][1]);
                i++;
            }
            else
            {
                ans.push_back({cstart, cend});
                cstart = ins[i + 1][0];
                cend = ins[i + 1][1];
                i++;
            }
        }
        return ans;
    }
};

// @lc code=end
