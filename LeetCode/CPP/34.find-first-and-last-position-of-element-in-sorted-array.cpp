// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem34.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans(2, -1);
        vector<int> first_check = binary_search(nums, target, 0, nums.size() - 1);

        if (first_check[0] == -1)
            return ans;

        vector<int> first_val = first_check, last_val = first_check;
        while (first_val[0] != -1)
        {
            ans[0] = first_val[1];
            first_val = binary_search(nums, target, first_val[0], first_val[1] - 1);
        }

        while (last_val[0] != -1)
        {
            ans[1] = last_val[1];
            last_val = binary_search(nums, target, last_val[1] + 1, last_val[2]);
        }

        return ans;
    }

    vector<int> binary_search(vector<int> &nums, int target, int low, int high)
    {
        int m;
        while (low <= high)
        {
            m = low + (high - low) / 2;
            if (nums[m] == target)
            {
                return vector<int>{low, m, high};
            }
            else if (nums[m] > target)
            {
                high = m - 1;
            }
            else
            {
                low = m + 1;
            }
        }
        return vector<int>{-1, -1, -1};
    }
};

// @lc code=end