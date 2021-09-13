/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> present_numbers;
        for (int i = 0; i < nums.size(); i++)
        {
            if (present_numbers[target - nums[i]])
            {
                return {i, present_numbers[target - nums[i]] - 1};
            }
            present_numbers[nums[i]] = i + 1;
        }
        return nums;
    }
};
// @lc code=end