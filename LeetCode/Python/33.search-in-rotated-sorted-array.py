# @before-stub-for-debug-begin
from python3problem33 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=33 lang=python3
#
# [33] Search in Rotated Sorted Array
#
from typing import List
# TODO: Solve (160 / 195)
"""
[3,1]
1
Ans = -1
Exp = 1
"""
# @lc code=start
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        k = 0
        for i in range(len(nums) - 1):
            if nums[i] > nums[i + 1]:
                k = i
                break
        
        l, r = 0, len(nums) - 1

        while l <= r:
            m = l + (r - l) // 2
            idx = m - k

            if nums[idx] > target:
                r = m - 1
            elif nums[idx] < target:
                l = m + 1
            else:
                if idx < 0:
                    idx += len(nums)
                print(idx)
                return idx

        return -1
# @lc code=end