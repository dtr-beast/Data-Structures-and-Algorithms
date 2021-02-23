# @before-stub-for-debug-begin
from python3problem747 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=747 lang=python3
#
# [747] Largest Number At Least Twice of Others
#

# @lc code=start
from typing import List


class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        if not nums:
            return -1
        
        max1 = max2 = -1
        index = -1

        for i in range(len(nums)):
            if max1 < nums[i]:
                max2 = max1
                max1 = nums[i]
                index = i
            elif max2 < nums[i]:
                max2 = nums[i]

        if max2 * 2 > max1:
            return -1

        return index
# @lc code=end