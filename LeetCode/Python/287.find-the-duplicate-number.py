#
# @lc app=leetcode id=287 lang=python3
#
# [287] Find the Duplicate Number
#
from typing import List

# @lc code=start

# Brute -> Sort the array, then check for adjacent element (Modifies Array)
# Brute 2 -> Use a dictionary (Extra Space)
# Optimal: Floyd's Hare and Tortoise Algorithm, TODO: Read it.
class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        fast = slow = slow2 = 0

        while True:
            fast = nums[nums[fast]]
            slow = nums[slow]

            if fast == slow:
                break

        while slow != slow2:
            slow = nums[slow]
            slow2 = nums[slow2]

        return slow

# @lc code=end

