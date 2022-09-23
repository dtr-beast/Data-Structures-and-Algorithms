// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int pivot_index = 0;
        int low = 0, m, high = nums.size() - 1;

        if (nums[0] > nums[nums.size() - 1])
        {
            while (low < high)
            {
                m = low + (high - low) / 2;
                if (nums[m] < nums[0])
                {
                    high = m;
                }
                else
                {
                    low = m + 1;
                }
            }
            pivot_index = low;
        }
        if (target > nums[pivot_index])
        {
            low = pivot_index;
            high = nums.size() - 1;
        }
        else
        {
            low = 0;
            high = pivot_index;
        }

        while (low <= high)
        {
            m = low + (high - low) / 2;
            if (nums[m] < target)
            {
                low = m + 1;
            }
            else if (nums[m] > target)
            {
                high = m - 1;
            }
            else
            {
                return m;
            }
        }

        return -1;
    }
};
// @lc code=end
