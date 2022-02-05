// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem213.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=213 lang=cpp
 *
 * [213] House Robber II
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int len = nums.size();
        if (len <= 3)
        {
            return *max_element(nums.begin(), nums.end());
        }

        vector<int> dp(len + 1);
        vector<int> dpr(len + 1);

        dp[1] = nums[0];
        dpr[1] = nums[len - 1];

        map<int, bool> m, mr;
        m[nums[0]] = true;
        mr[nums[len - 1]] = true;

        int i = 2;
        int firstHome = 1;
        int lastHome = 1;

        for (; i < len; i++)
        {

            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 1]);
            dpr[i] = max(dpr[i - 1], dpr[i - 2] + nums[len - i]);

           if (dp[i] == dp[firstHome] || m.count(dp[i] - nums[i - 1]))
            {
                firstHome = i;
                m[dp[i]] = true;
            }
            if (dpr[i] == dpr[lastHome] || mr.count(dpr[i] - nums[len - i]))
            {
                lastHome = i;
                mr[dpr[i]] = true;
            }
        }

        if (i - 1 == firstHome)
        {
            dp[i] = max(dp[i - 1], nums[i - 1]);
        }
        else
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 1]);
        }
        if (i - 1 == lastHome)
        {
            dpr[i] = max(dpr[i - 1], nums[len - i]);
        }
        else
        {
            dpr[i] = max(dpr[i - 1], dpr[i - 2] + nums[len - i]);
        }

        for (int ele : dp)
        {
            cout << ele << " ";
        }
        cout << "\n";
        for (int ele : dpr)
        {
            cout << ele << " ";
        }
        cout << "\n";

        return max(dp[len], dpr[len]);
    }
};
// @lc code=end
