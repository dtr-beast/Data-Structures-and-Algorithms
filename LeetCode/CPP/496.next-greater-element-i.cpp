/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start

struct defaultMinusOne
{
    int val = -1;
};
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {

        // Initialize a Stack for monotonic values (values only in decreasing / increasing form).. decreasing in this case
        stack<int> s;
        map<int, defaultMinusOne> nextGreaterMap;

        // Save the first value in the stack
        s.push(nums2[0]);

        for (int i = 1; i < nums2.size(); i++)
        {
            /*
            While the stack is not empty and the values inside are smaller than the current number
            Store the current number as the "next greater element" at the indexes
            using the map, and pop out the values
            due to this condition >> nums2[i] > s.top() << the stack will only stores value which are
            in decreasing order, eg-> 4 3 2...
            */
            while (!s.empty() && nums2[i] > s.top())
            {
                nextGreaterMap[s.top()].val = nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }

        vector<int> ans(nums1.size(), -1);

        // After the next greater element map is populated, store the answers to the queries
        for (int i = 0; i < nums1.size(); i++)
            ans[i] = nextGreaterMap[nums1[i]].val;
        return ans;
    }
};
// @lc code=end
