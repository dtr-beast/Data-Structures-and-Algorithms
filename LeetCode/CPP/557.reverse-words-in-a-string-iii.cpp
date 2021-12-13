#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=557 lang=cpp
 *
 * [557] Reverse Words in a String III
 */

// @lc code=start
class Solution
{
public:
    void reverse(string &s, int i, int j)
    {
        while (i < j)
        {
            swap(s[i++], s[j--]);
        }
    }
    string reverseWords(string s)
    {
        int i = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (isspace(s[j]))
            {
                reverse(s, i, j - 1);
                i = j + 1;
            }
        }
        reverse(s, i, s.size() - 1);
        return s;
    }
};
// @lc code=end
