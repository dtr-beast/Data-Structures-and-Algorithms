// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <iostream>
#include "commoncppproblem278.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */
bool isBadVersion(int version);

// @lc code=start
// The API isBadVersion is defined for you.

class Solution
{
public:
    int firstBadVersion(int n)
    {
        long long l = 1, r = n;
        long long m;
        while (l < r)
        {
            m = l + (r - l) / 2;
            if (isBadVersion(m))
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }
        return l;
    }
};
// @lc code=end
