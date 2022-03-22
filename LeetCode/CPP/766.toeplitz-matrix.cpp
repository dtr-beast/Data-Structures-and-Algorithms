/*
 * @lc app=leetcode id=766 lang=cpp
 *
 * [766] Toeplitz Matrix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    // TODO: Improve
    /*  HINT! -
        Instead of checking the diagonals, we can check every element one by one.
    */
    bool isToeplitzMatrix(vector<vector<int>> &m)
    {
        int r = m.size(), c = m[0].size();
        vector<vector<bool>> checked(r, vector<bool>(c));
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c - 1; j++)
            {
                if (checked[i][j])
                    break;
                for (int x = 0; i + x < r && j + x < c; x++)
                {
                    checked[i + x][j + x] = true;
                    if (m[i + x][j + x] != m[i][j])
                        return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end
