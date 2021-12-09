#include <vector>
/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */
using namespace std;
// @lc code=start
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0, r = nums.size();
        int m;
        while (l < r)
        {
            m = l + (r - l) / 2;
            if (nums[m] == target)
            {
                return m;
            }
            else if (nums[m] > target)
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }
        return -1;
    }
};
// @lc code=end