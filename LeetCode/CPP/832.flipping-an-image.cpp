// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem832.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=832 lang=cpp
 *
 * [832] Flipping an Image
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        int n = image.size();
        int tmp;
        for (int i = 0; i < n; i++)
        {
            int l = 0, r = n - 1;
            while (l <= r)
            {
                tmp = image[i][l];
                image[i][l] = !image[i][r];
                image[i][r] = !tmp;
                l++, r--;
            }
        }
        return image;
    }
};
// @lc code=end
