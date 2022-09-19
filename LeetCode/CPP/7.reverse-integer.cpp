/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */
#include <bits/stdc++.h>

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        int num = 0;
        while (x != 0)
        {
            if (is_overflow(num, x % 10))
                return 0;
            num = (num * 10) + (x % 10);
            x /= 10;
            std::cout << num << "\n";
        }
        return num;
    }
    bool is_overflow(int num, int add)
    {
        return ((num > INT32_MAX / 10 || num == INT32_MAX / 10 && add > 7) || (num < INT32_MIN / 10 || num == INT32_MIN / 10 && add < -8));
    }
};

// @lc code=end
