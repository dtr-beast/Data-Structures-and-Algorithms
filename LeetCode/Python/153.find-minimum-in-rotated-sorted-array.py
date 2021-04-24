#
# @lc app=leetcode id=153 lang=python3
#
# [153] Find Minimum in Rotated Sorted Array
#
# TODO: Solve (Binary Search)
# @lc code=start
class Solution:
    def findMin(self, nums: List[int]) -> int:
        l, r = 0, len(nums)
        
        while l < r:
            m = r + (l - r) // 2
            if nums[m] > nums[m + 1]:
                return nums[m + 1]
            elif nums[m] > nums[]

        pass
# @lc code=end