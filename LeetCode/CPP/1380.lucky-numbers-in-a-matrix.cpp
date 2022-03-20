/*
 * @lc app=leetcode id=1380 lang=cpp
 *
 * [1380] Lucky Numbers in a Matrix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &mat)
    {
        int m = mat.size(), n = mat[0].size();
        vector<int> ans;
        map<int, bool> minr;
        for (int i = 0; i < m; i++)
        {
            int minR = mat[i][0];
            for (int j = 1; j < n; j++)
                minR = min(mat[i][j], minR);

            minr[minR] = true;
        }

        vector<int> maxc(n);
        for (int i = 0; i < n; i++)
        {
            int minC = mat[0][i];

            for (int j = 1; j < m; j++)
                minC = max(mat[j][i], minC);
            maxc[i] = minC;
        }
        for (auto ele : maxc)
        {
            if (minr[ele])
                ans.push_back(ele);
        }

        return ans;
    }
};
// @lc code=end
