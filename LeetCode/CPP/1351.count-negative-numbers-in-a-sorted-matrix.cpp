/*
 * @lc app=leetcode id=1351 lang=cpp
 *
 * [1351] Count Negative Numbers in a Sorted Matrix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    /*
     * [
     *    [ 4, 3, 2,-1],
     *    [ 3, 2, 1,-1],
     *    [ 1, 1,-1,-2],
     *    [-1,-1,-2,-3]
     * ]
     *
     * Since the values are in non-increasing order both row wise and column wise, we can use this information
     * to figure out the number of negative elements in a row.
     * eg. In the last row, the first element is negative (-1), which gurantees that the subsequent elements will also be negative,
     *     In the second last row, the first two elements (1, 1) are positive, so we skip past them and the find the first negative number and then all the
     *     remaining values in the row will also be negative;
     */
    int countNegatives(vector<vector<int>> &grid)
    {
        int neg = 0, m = grid.size(), n = grid[0].size(), r = m - 1, c = 0;

        while (r >= 0 && c < n)
        {
            if (grid[r][c] < 0)
            {
                neg += n - c;
                r--;
            }
            else
                c++;
        }
        return neg;
    }
};
// @lc code=end
