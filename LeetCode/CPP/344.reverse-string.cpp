#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            swap(s[i++], s[j--]);
        }
    }
};
// @lc code=end
