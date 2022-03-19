/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int l = 1, r = num / 2;
        int m;
        while (l <= r)
        {
            m = l + (r - l) / 2;
            if (m * m == num)
                return true;
            else if (m * m < num)
                l = m + 1;
            else
                r = m - 1;
        }
        return (m * m == num);
    }
};
// @lc code=end
