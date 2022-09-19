/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int r = matrix.size(), c = matrix[0].size(), x = 0, y = 0, i, vwrite = 0;

        vector<int> ans(r * c);

        while (x < r && y < c)
        {
            // L2R
            for (i = y; i < r; i++)
            {
                ans[vwrite++] = matrix[x][i];
            }
            x++;

            // T2D
            for (i = x; i < c; i++)
            {
                ans[vwrite++] = matrix[i][y];
            }
            c--;
            // R2L
            for (i = c - 1; i >= y; i--)
            {
                ans[vwrite++] = matrix[r - 1][i];
            }
            r--;

            // D2T
            for (i = r - 1; i >= x; i--)
            {
                ans[vwrite++] = matrix[i][c - 1];
            }
            y++;
        }
        return ans;
    }
};
// @lc code=end
