/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
// TODO: Improve
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        vector<vector<int>> ans;

        for (int i = 0; i < len; i++)
        {
            if (nums[i] > 0)
                break;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            twoSum(nums, i, ans);
        }
        return ans;
    }

    void twoSum(vector<int> &nums, int i, vector<vector<int>> &ans)
    {
        set<multiset<int>> s;
        map<int, int> m;
        for (int j = i + 1; j < nums.size(); j++)
        {
            int findNum = 0 - (nums[i] + nums[j]);
            if (m.count(findNum))
            {
                multiset<int> ans = {nums[i], nums[j], findNum};
                s.insert(ans);
            }
            m[nums[j]] = j;
        }
        for (auto ms : s)
        {
            ans.push_back(vector<int>(ms.begin(), ms.end()));
        }
    }
};
// @lc code=end
