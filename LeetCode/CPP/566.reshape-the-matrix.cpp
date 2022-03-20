/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        int m = mat.size(), n = mat[0].size();
        if (m * n != r * c)
            return mat;

        vector<vector<int>> arr(r, vector<int>(c));

        for (int i = 0, curr = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++, curr++)
                arr[i][j] = mat[curr / n][curr % n];
        }
        return arr;
    }
};
// @lc code=end
