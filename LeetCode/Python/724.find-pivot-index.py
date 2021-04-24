# @before-stub-for-debug-begin
from python3problem724 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=724 lang=python3
#
# [724] Find Pivot Index
#

# @lc code=start
from typing import List

# TODO: Solve
class Solution:
    def sumList(self, nums: List[int]) -> List[List[int]]:
        lst = []
        left_sum = 0
        length = len(nums)
        
        for i in range(length):
            lst.append(left_sum)
            left_sum += nums[i]
            # lst[1].append(rightSum)
            # rightSum += nums[length - i - 1]
        
        return lst

    def pivotIndex(self, nums: List[int]) -> int:
        if not nums:
            return -1
        
        left_sum = right_sum = 0
        length = len(nums)
        left_index, right_index = 0, length - 1


        if nums[left_index] < nums[right_index]:
            left_sum = nums[left_index]
            left_index += 1
            right_sum = 0
        else:
            left_sum = 0
            right_sum = nums[right_index]
            right_index -= 1

        while left_index <= right_index:
            if left_sum > right_sum:
                right_sum += nums[right_index]
                right_index -= 1
            elif right_sum > left_sum:
                left_sum += nums[left_index]
                left_index += 1
            elif left_index + (length - right_index) == length:
                print(left_index)
                return left_index
                 

        # leftList, rightList = self.sumList(nums)


        # for i in range(length):
        #     for j in range(length):
        #         if leftList[i] == rightList[j]:
        #             if i + j + 1 == length:
        #                 return i
        
        print(-1)
        return -1
# @lc code=end