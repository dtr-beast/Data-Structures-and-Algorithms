#
# @lc app=leetcode id=3 lang=python3
#
# [3] Longest Substring Without Repeating Characters
#


# @lc code=start
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) <= 1:
            return len(s)

        char_dict = {}
        max_len = 0
        curr_start_idx = 0
        for i in range(len(s)):
            if s[i] in char_dict:
                curr_start_idx = max(char_dict.pop(s[i]) + 1, curr_start_idx)

            max_len = max(max_len, i - curr_start_idx + 1)
            char_dict[s[i]] = i

        return max_len

# @lc code=end
