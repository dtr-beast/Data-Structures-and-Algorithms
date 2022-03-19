/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */

// @lc code=start
/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution
{
public:
    int guessNumber(int n)
    {
        int l = 1, r = n;
        int m = l + (r - l) / 2;
        int result = guess(m);
        while (result != 0 && l <= r)
        {
            if (result == 1)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
            m = l + (r - l) / 2;
            result = guess(m);
        }
        return m;
    }
};
// @lc code=end
