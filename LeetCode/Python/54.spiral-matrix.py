# @before-stub-for-debug-begin
from python3problem54 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=54 lang=python3
#
# [54] Spiral Matrix
#

from typing import List, Union
# TODO: Implement
# @lc code=start
class Solution:
    def spiral(self, matrix: Union[List[List[int]], List[int]]) -> List[int]:
        lst = []
        rowLength = len(matrix)

        if type(matrix[0]) is list:
            colLength = len(matrix[0])
            
            # If only a single column
            if colLength == 1:
                for i in range(rowLength):
                    lst.append(matrix[i][0])
            
            # If only a single row
            elif rowLength == 1:
                for i in range(colLength):
                    lst.append(matrix[0][i])
            
            # Going spiral, for other cases
            else:
                for i in range(colLength):
                    lst.append(matrix[0][i])
                
                for i in range(1, rowLength):
                    lst.append(matrix[i][colLength - 1])

                for i in range(colLength - 2, 0, -1):
                    lst.append(matrix[rowLength - 1][i])
                
                for i in range(rowLength - 1, 0, -1):
                    lst.append(matrix[i][0])
        
        return lst
    
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        # lst = [[1], [2], [3], [4]]
        # lst2 = [[1, 2, 3, 4]]

        print(self.spiral(matrix))


        # for i in range(matrix):
        #     for j in range(matrix[i]):
        #         lst.append(matrix[i][j])

# @lc code=end