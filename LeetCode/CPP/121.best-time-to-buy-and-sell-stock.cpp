/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        // By DP
        int max_price_yet = 0;
        if (prices.size() == 0)
        {
            return max_price_yet;
        }

        int min_ele_yet = prices[0];
        int len = prices.size();

        // keep finding the minimum element and calculate the max profit to ith day
        for (int i = 0; i < len; i++)
        {
            if (prices[i] < min_ele_yet)
            {
                min_ele_yet = prices[i];
            }
            max_price_yet = max(max_price_yet,
                                prices[i] - min_ele_yet);
        }
        return max_price_yet;
    }
};
// @lc code=end
