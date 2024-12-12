#
# @lc app=leetcode id=121 lang=python3
#
# [121] Best Time to Buy and Sell Stock
#
from typing import List

# @lc code=start


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_price = 0
        curr_min = prices[0]
        for i in range(1, len(prices)):
            curr_min = min(prices[i - 1], curr_min)
            max_price = max(max_price, prices[i] - curr_min)

        return max_price


# @lc code=end
