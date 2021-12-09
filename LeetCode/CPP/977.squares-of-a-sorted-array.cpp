#include <vector>
#include <iostream>
using namespace std;
/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> arr(nums.size());
        // Take two pointers
        int i = 0, j = nums.size() - 1;
        for (int c = arr.size() - 1; c >= 0; c--)
        {
            // Fill the new array depending on the bigger absolute value
            if (abs(nums[i]) > abs(nums[j]))
            {
                arr[c] = nums[i] * nums[i];
                i++;
            }
            else
            {
                arr[c] = nums[j] * nums[j];
                j--;
            }
        }
        return arr;
    }
};
// @lc code=end
