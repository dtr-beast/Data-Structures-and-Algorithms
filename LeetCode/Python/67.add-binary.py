#
# @lc app=leetcode id=67 lang=python3
#
# [67] Add Binary
#
# TODO: Solve & To Java
# @lc code=start
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        s = ''
        for idx, i, j in enumerate(zip(a, b)):
            if i == '1' and j == '1':
                s += '0'
                # a[idx + 1] = '2'
            elif i == '1' or j == '1':
                s += '1'
            else:
                s += '0'
# @lc code=end