/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {
        if (x <= 1)
            return x;
        long long l = 0, r = x / 2, m, ans = -1;

        while (l <= r)
        {
            m = l + (r - l) / 2;
            if (m * m < x)
            {
                ans = m;
                l = m + 1;
            }
            else if (m * m > x)
            {
                r = m - 1;
            }
            else
                return m;
        }
        return ans;
    }
};
// @lc code=end
