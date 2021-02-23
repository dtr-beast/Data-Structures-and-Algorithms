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


class Solution:
    def sumList(self, nums: List[int]) -> List[List[int]]:
        lst = []
        leftSum = 0
        length = len(nums)
        
        for i in range(length):
            lst.append(leftSum)
            leftSum += nums[i]
            # lst[1].append(rightSum)
            # rightSum += nums[length - i - 1]
        
        return lst

    def pivotIndex(self, nums: List[int]) -> int:
        if not nums:
            return -1
        
        leftSum = rightSum = 0
        length = len(nums)
        leftIndex, rightIndex = 0, length - 1


        if nums[leftIndex] < nums[rightIndex]:
            leftSum = nums[leftIndex]
            leftIndex += 1
            rightSum = 0
        else:
            leftSum = 0
            rightSum = nums[rightIndex]
            rightIndex -= 1
        [1,2,3]

        while leftIndex <= rightIndex:
            if leftSum > rightSum:
                rightSum += nums[rightIndex]
                rightIndex -= 1
            elif rightSum > leftSum:
                leftSum += nums[leftIndex]
                leftIndex += 1
            elif leftIndex + (length - rightIndex) == length:
                print(leftIndex)
                return leftIndex
                 

        # leftList, rightList = self.sumList(nums)


        # for i in range(length):
        #     for j in range(length):
        #         if leftList[i] == rightList[j]:
        #             if i + j + 1 == length:
        #                 return i
        
        print(-1)
        return -1
# @lc code=end