#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
// TODO: Improve, can be improved even further, some redundant loops and conditions...
class Solution
{
public:
    bool checkArr(int *arr)
    {
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2)
    {
        // If the permutation is bigger than the container string, impossible to fit s1 into s2
        if (s1.size() > s2.size())
        {
            return false;
        }
        // Count the letter frequency
        int arr[26] = {};
        // Also keep track of which letters are present in s1
        map<char, bool> exist;

        for (char ch : s1)
        {
            arr[ch - 'a']++;
            exist[ch] = true;
        }

        int i = 0;
        int k = s1.size();
        // Make window
        for (; i < k; i++)
        {
            if (exist[s2[i]])
            {
                arr[s2[i] - 'a']--;
            }
        }

        for (; i < s2.size(); i++)
        {
            if (checkArr(arr))
            {
                return true;
            }
            // Remove the last letter from the window
            if (exist[s2[i - k]])
            {
                arr[s2[i - k] - 'a']++;
            }
            // add the next letter to the window
            if (exist[s2[i]])
            {
                arr[s2[i] - 'a']--;
            }
        }
        if (checkArr(arr))
        {
            return true;
        }
        return false;
    }
};
// @lc code=end