/*
 * @lc app=leetcode id=852 lang=cpp
 *
 * [852] Peak Index in a Mountain Array
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int ans = arr[1];
        int low = 1, m, high = arr.size() - 2;

        while (low <= high)
        {
            m = low + (high - low) / 2;
            if (arr[m] < arr[m + 1])
            {
                low = m + 1;
            }
            else if (arr[m] < arr[m - 1])
            {
                high = m - 1;
            }
            else
            {
                return m;
            }
        }
        return ans;
    }
};
// @lc code=end
