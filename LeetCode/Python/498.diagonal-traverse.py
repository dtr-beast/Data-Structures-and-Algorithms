#
# @lc app=leetcode id=498 lang=python3
#
# [498] Diagonal Traverse
#
from typing import List
# TODO: Solve
# @lc code=start
class Solution:
    def findDiagonalOrder(self, matrix: List[List[int]]) -> List[int]:
        if not matrix:
            return []
        
        lst = []
        
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                lst.append(matrix[i][j])

        
        print(lst)
        return lst
# @lc code=end