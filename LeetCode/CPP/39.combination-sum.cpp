
/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    void printF(vector<int> &arr)
    {
        for (auto ele : arr)
            cout << ele << " ";
        cout << "\n";
    }
    bool makeCombinationSum(vector<vector<int>> &ans, vector<int> &combinations,
                            int target, vector<int> curr,
                            int sum = 0, int i = 0)
    {
        if (i == combinations.size() || sum > target)
            return false;

        // Skip the current number
        makeCombinationSum(ans, combinations, target, curr, sum, i + 1);

        curr.push_back(combinations[i]);
        sum += combinations[i];
        if (sum == target)
        {
            ans.push_back(curr);
            return true;
        }
        else
        {
            // Add the current number again
            if (makeCombinationSum(ans, combinations, target, curr, sum, i))
                return true;
            // Start with the next number

            return makeCombinationSum(ans, combinations, target, curr, sum, i + 1);
        }
        return false;
    }
    vector<vector<int>> combinationSum(vector<int> &combinations, int target)
    {
        vector<vector<int>> ans;
        vector<int> curr;
        makeCombinationSum(ans, combinations, target, curr);
        for (auto arr : ans)
        {
            printF(arr);
        }
        return ans;
    }
};
// @lc code=end