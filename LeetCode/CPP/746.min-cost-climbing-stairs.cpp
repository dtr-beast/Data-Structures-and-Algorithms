/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        if (cost.size() == 2)
        {
            cout << min(cost[0], cost[1]);
            return 0;
        }
        vector<int> dp(cost.size(), 0);
        dp[0] = cost[0];
        dp[1] = cost[1];
        int i;
        for (i = 2; i < cost.size() - 1; i++)
        {
            dp[i] = min(dp[i - 1] + cost[i], dp[i - 2] + cost[i]);
        }

        dp[i] = min(dp[i - 2] + cost[i], dp[i - 1]);

        // for (int i: dp) {
        //     cout << i << " ";
        // }
        // cout << endl;
        cout << dp[i];
        return 0;
    }
};
// @lc code=end
