// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */
#include <bits/stdc++.h>
#include <vector>
// @lc code=start
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        long long l = 0, h = nums.size();
        long long m;
        while (l < h)
        {
            // To avoid Overflow
            m = l + (h - l) / 2;

            // Return index if element is found in the array
            if (nums[m] == target)
            {
                return m;
            }
            // Since the number is bigger than the target,
            else if (nums[m] > target)
            {
                h = m;
            }
            else
            {
                l = m + 1;
            }
        }
        return l;
    }
};
// @lc code=end