/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n < 3)
            return n;

        int a = 1, b = 2, stairs = 0;
        for (int i = 3; i <= n; i++)
        {
            stairs = a + b;
            a = b;
            b = stairs;
        }
        return stairs;
    }
};
// @lc code=end
