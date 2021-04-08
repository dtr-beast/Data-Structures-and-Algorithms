# @before-stub-for-debug-begin
from python3problem69 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=69 lang=python3
#
# [69] Sqrt(x)
#

# @lc code=start


class Solution:
    def mySqrt(self, x: int) -> int:
        if x <= 1:
            return x
        
        # Since the Square root can't be half of a number
        l, r = 0, x // 2

        m = 0
        while l <= r:
            # (r + l) will cause overflow in other languages
            m = l + (r - l) // 2

            # 2 * 2 <= 5 < 3 * 3
            if m * m <= x < (m + 1) ** 2:
                return m
            # 3 * 3 > 5
            elif m * m > x:
                r = m - 1
            # 1 * 1 < 5
            else:
                l = m + 1
# @lc code=end