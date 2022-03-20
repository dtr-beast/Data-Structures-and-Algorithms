/*
 * @lc app=leetcode id=1572 lang=cpp
 *
 * [1572] Matrix Diagonal Sum
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int s = 0;
        int l = mat.size();
        for (int i = 0; i < l; i++)
        {
            s += mat[i][i] + mat[i][l - i - 1];
        }
        // If the matrix's length is odd, the middle element is added twice, so we remove it
        if (l & 1)
            s -= mat[l / 2][l / 2];
        return s;
    }
};
// @lc code=end
