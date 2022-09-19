/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        map<int, bool> m;
        vector<int> ans;
        for (int num : nums1)
        {
            m[num] = true;
        }
        for (int num : nums2)
        {
            if (m[num])
            {
                m[num] = false;
                ans.push_back(num);
            }
        }
        return ans;
    }
};
// @lc code=end
