/*
 * @lc app=leetcode id=123 lang=cpp
 *
 * [123] Best Time to Buy and Sell Stock III
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int l = prices.size();
        vector<int> dp(l), dpr(l);

        int min_price = prices[0];
        for (int i = 1; i < l; i++)
        {
            dp[i] = max(prices[i - 1] - min_price, dp[i - 1]);
            min_price = min(min_price, prices[i - 1]);
        }

        int max_price = prices[l - 1];
        for (int i = l - 2; i >= 0; i--)
        {
            dpr[i] = min(max_price - prices[i], dpr[i + 1]);
            max_price = max(max_price, prices[i]);
        }

        int max_profit = 0;
        for (int i = 0; i <= l; i++)
        {
            max_profit = max(max_profit, dp[i] + dpr[i]);
        }
        return max_profit;
    }
};
// @lc code=end
