# @before-stub-for-debug-begin
from python3problem118 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=118 lang=python3
#
# [118] Pascal's Triangle
#

# @lc code=start
class Solution:
    def generate(self, num_rows: int) -> List[List[int]]:
        lst = [[1]]
        for i in range(1, num_rows):
            temp_list = [1]
            
            for j in range(2, i + 1):
                temp_list.append(lst[i - 1][j - 2] + lst[i - 1][j - 1])
            
            temp_list.append(1)
            lst.append(temp_list)
        
        return lst
# @lc code=end