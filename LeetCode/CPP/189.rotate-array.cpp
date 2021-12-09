// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem189.h"

using namespace std;
// @before-stub-for-debug-end

#include <vector>
#include <iostream>
using namespace std;
/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        if (k == 0)
            return;
        int len = nums.size();
         vector<int> arr(len); 
        k = k % len;
        for (int i = 0; i < len and k < len; i++)
        {
            arr[i] = nums[(len - k + i) % len];
            // swap(nums[len - k + i], nums[i]);
        }
        nums = arr;
    }
};
// @lc code=end