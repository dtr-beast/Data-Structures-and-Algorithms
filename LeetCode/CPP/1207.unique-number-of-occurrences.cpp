/*
 * @lc app=leetcode id=1207 lang=cpp
 *
 * [1207] Unique Number of Occurrences
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        map<int, int> frequency, freq_of_freq;
        for (int num : arr)
        {
            frequency[num]++;
        }
        for (auto kv : frequency)
        {
            if (freq_of_freq[kv.second])
            {
                return false;
            }
            freq_of_freq[kv.second] = true;
        }
        return true;
    }
};
// @lc code=end
