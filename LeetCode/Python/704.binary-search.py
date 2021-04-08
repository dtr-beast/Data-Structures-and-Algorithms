# @before-stub-for-debug-begin
from python3problem704 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=704 lang=python3
#
# [704] Binary Search
#
# @lc code=start
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1 
        mid = 0

        while left <= right:
            mid = left + (right - left) // 2
            if nums[mid] == target:
                return mid
            elif nums[mid] > target:
                right = mid - 1 
            else:
                left = mid + 1


        return -1
# @lc code=end