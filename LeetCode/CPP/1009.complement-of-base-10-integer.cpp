/*
 * @lc app=leetcode id=1009 lang=cpp
 *
 * [1009] Complement of Base 10 Integer
 */

#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int bitwiseComplement(int n)
    {
        if (n == 0)
            return 1;
        int m = n, mask = 0;

        while (m)
        {
            m = m >> 1;
            mask = (mask << 1) | 1;
        }
        cout << mask;
        return mask & (~n);
    }
};
// @lc code=end

int main()
{
    Solution s = Solution();
    cout << s.bitwiseComplement(5) << " " << (~5);
}