#
# @lc app=leetcode id=66 lang=python3
#
# [66] Plus One
#

# @lc code=start
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num = str(int(''.join(map(str, digits))) + 1)
        return [int(i) for i in num]
        
# @lc code=end