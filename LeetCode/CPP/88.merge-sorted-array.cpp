/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1, j = n - 1;
        int curr;
        for (curr = nums1.size() - 1; curr >= 0, i >= 0, j >= 0; curr--)
        {
            if (nums1[i] > nums1[j])
            {
                nums1[curr] = nums1[i--];
            }
            else
            {
                nums1[curr] = nums2[j--];
            }
        }
        while (i >= 0)
        {
            nums1[curr--] = nums2[i--];
        }
        while (j >= 0)
        {
            nums1[curr--] = nums2[j--];
        }
    }
};
// @lc code=end