// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem283.h"

using namespace std;
// @before-stub-for-debug-end

#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */
// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        for (int lastNonZeroFoundAt = 0, cur = 0; cur < nums.size(); cur++)
        {
            if (nums[cur] != 0)
            {
                swap(nums[lastNonZeroFoundAt++], nums[cur]);
            }
        }
    }
};
// @lc code=end
