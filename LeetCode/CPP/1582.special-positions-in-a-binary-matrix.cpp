/*
 * @lc app=leetcode id=1582 lang=cpp
 *
 * [1582] Special Positions in a Binary Matrix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    // TODO: Improve
    /* HINT! -
    What if we map the frequencies of matrix before calculating?
    */
    int numSpecial(vector<vector<int>> &mat)
    {
        int c = 0, m = mat.size(), n = mat[0].size();
        for (int i = 0; i < m; i++)
        {
            int first = -1;
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 1)
                {
                    if (first == -1)
                        first = j;
                    else
                    {
                        first = -1;
                        break;
                    }
                }
            }
            if (first != -1)
            {
                for (int j = 0; j < m; j++)
                {
                    if (j != i && mat[j][first] == 1)
                    {
                        first = -1;
                        break;
                    }
                }
                if (first != -1)
                    c++;
            }
        }
        return c;
    }
};
// @lc code=end
