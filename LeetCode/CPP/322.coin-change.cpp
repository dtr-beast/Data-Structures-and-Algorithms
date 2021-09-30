/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int coinChange(vector<int> &coins, int amount = 0)
    {
        sort(coins.begin(), coins.end());
        // Declare Vector with amount + 1 values, defaulting to amount + 1 value
        vector<int> coinMemo(amount + 1, amount + 1);
        // Set first value as 0, since for 0 amount, 0 coins will be needed
        coinMemo[0] = 0;

        // Start counting how many coins will be required for every amount starting from 1
        for (int i = 1; i < amount + 1; i++)
        {
            // Iterate through all the coins to find the amount can be arranged
            for (int coin : coins)
            {
                // If the coin is too big, try with another coin
                if (i - coin < 0)
                {
                    break;
                }
                // See if the number of coins needed for (i - c) is possible.
                if (coinMemo[i - coin] != amount + 1)
                {
                    // If yes, then store the number of coins needed for "i" amount, and compare it to previously saved
                    // to check if it can be done in fewer coins
                    coinMemo[i] = min(coinMemo[i - coin] + 1, coinMemo[i]);
                }
            }
        }
        // In case the value is not changed (NOT POSSIBLE)
        if (coinMemo[amount] == amount + 1)
        {
            return -1;
        }
        // Return the answer
        else
        {
            return coinMemo[amount];
        }
    }
};
// @lc code=end
