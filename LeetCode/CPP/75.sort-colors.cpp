/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int i = 0, j = nums.size() - 1;
        int k = 0;
        while (i < j && k <= j && k < nums.size())
        {
            if (nums[k] == 2)
            {
                swap(nums[k], nums[j--]);
            }
            else if (nums[k] == 0)
            {
                swap(nums[k++], nums[i++]);
            }
            else
            {
                k++;
            }
        }
    }
};
// [1, 2, 0, 2, 1]
// [1, 1, 0, 2, 2]
// [0, 1, 1, 2, 2]
// @lc code=end
