#
# @lc app=leetcode id=34 lang=python3
#
# [34] Find First and Last Position of Element in Sorted Array
#
# TODO: Solve (Binary Search)
# @lc code=start
class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        l, r = 0, len(nums)
        lst = [-1, -1]
       
        while l + 1 < r:
            m = r + (l - r) // 2

            if nums[m] == target and nums[max(m - 1, 0)] != target:
                lst[0] = m
                l = m

            elif nums[m] == target and nums[min(m + 1, len(nums) - 1)] != target:
                lst[1] = m
                r = m

            elif nums[m] < target:
                r = m
            elif nums[m] > target:
                l = m

        if nums[l] == target:
            lst[0] = lst[1] = l
        if nums[r] == target:
            lst[0] = lst[1] = r
        
        print(lst)
        return lst
# @lc code=enda