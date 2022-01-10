// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem74.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        int i = 0;
        while (i < m)
        {
            if (target <= matrix[i][n - 1])
            {
                return binarySearch(matrix[i], target);
            }
            else
            {
                i++;
            }
        }
        cout << false;
        return false;
    }
    bool binarySearch(vector<int> &arr, int target)
    {
        int l = 0, r = arr.size() - 1;
        int m;
        while (l <= r)
        {
            m = l + (r - l) / 2;
            if (arr[m] == target)
            {
                cout << true;
                return true;
            }
            else if (arr[m] > target)
            {
                r = m;
            }
            else
            {
                l = m;
            }
        }
        return false;
    }
};
// @lc code=end
