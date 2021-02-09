#
# @lc app=leetcode id=1 lang=python3
#
# [1] Two Sum
#

# @lc code=start
# TODO: Improve
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        listLen = len(nums)
        for i in range(listLen):
            for j in range(i + 1, listLen):
                if (nums[i] + nums[j]) == target:
                    return [i, j]
# @lc code=end