#
# @lc app=leetcode id=374 lang=python3
#
# [374] Guess Number Higher or Lower
#

# @lc code=start
# The guess API is already defined for you.
# @param num, your guess
# @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        l, r = 0, n
        m = 0

        while l <= r:
            # To avoid overflow ((l + r) // 2 is Same)
            m = l + (r - l) // 2
            ans = guess(m)
            if ans == -1:
                r = m - 1
            elif ans == 1:
                l = m + 1
            else:
                return m
# @lc code=end