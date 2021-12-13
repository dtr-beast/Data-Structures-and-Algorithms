#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// TODO: 298 ("tmmzuxt" Output: 4, Expected: 5), need to clean all the previous map infos, meaning ki agar m mila hai to uski position ke peeche vale maps ko bhi clear karna hoga
// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int len = 0;
        int currLen = 0;
        int i = 0;
        int stop = 0;
        map<char, int> m;
        for (; i < s.size();)
        {
            if (m[s[i]])
            {
                len = max(len, currLen);
                currLen -= abs((m[s[i]] - stop - 1));
                stop = m[s[i]];
                // int t = m[s[i]];
                // m[s[i]] = 0;
                // i = t;
                // continue;
            }
            else
            {
                currLen++;
            }
            m[s[i]] = i + 1;
            i++;
        }
        len = max(len, currLen);
        cout << "Length: " << len;
        return len;
    }
};
// @lc code=end

/*
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int len = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int currLen = 0;
            map<char, bool> seen;
            for (int j = i; j < s.size(); j++)
            {
                if (seen[s[j]])
                {
                    break;
                }
                currLen++;
                seen[s[j]] = true;
            }
            len = max(len, currLen);
        }
        return len;
    }
};
*/