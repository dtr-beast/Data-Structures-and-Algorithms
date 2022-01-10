/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> v;
        map<int, int> m;
        // Hash values of one array, from both sides to reduce complexity from O(n) to O(n / 2)
        for (int i = 0, j = nums1.size() - 1; i <= j; i++, j--)
        {
            if (i == j)
            {
                m[nums1[i]]++;
                break;
            }
            m[nums1[i]]++;
            m[nums1[j]]++;
        }
        // Then search the values in the second array
        for (int i = 0, j = nums2.size() - 1; i <= j; i++, j--)
        {
            if (i == j)
            {
                if (m[nums2[i]] > 0)
                {
                    v.push_back(nums2[i]);
                    m[nums2[i]]--;
                }
                break;
            }
            if (m[nums2[i]] > 0)
            {
                v.push_back(nums2[i]);
                m[nums2[i]]--;
            }
            if (m[nums2[j]] > 0)
            {
                v.push_back(nums2[j]);
                m[nums2[j]]--;
            }
        }
        return v;
    }
};
// @lc code=end
