/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int l = 0, m, r = nums.size() - 1;
        int ans = nums[0];
        while (l < r)
        {
            m = l + (r - l) / 2;
            if (nums[m] > nums[0])
            {
                l = m + 1;
            }
            else if (nums[m] < nums[0])
            {
                r = m;
            }
            ans = nums[r];
        }
        return ans;
    }
};
// @lc code=end

int main()
{
    Solution s = Solution();
    vector<int> arr = vector<int>{4, 5, 6, 7, 0};
    // vector<int> arr = vector<int>{11, 13, 15, 17};

    cout << s.findMin(arr);
}