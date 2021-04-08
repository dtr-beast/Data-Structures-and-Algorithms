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
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        # Checked Solution
        pass

# @lc code=end

"""
def spiral(self, matrix: Union[List[List[int]], List[int]]) -> List[int]:
        
        def sub_i(lst):
            lst[0] -= 1
            lst[3] -= 1
            return lst

        def sub_j(lst):
            lst[1] -= 1
            lst[2] -= 1
            return lst

        def add_i(lst):
            lst[0] += 1
            lst[3] += 1
            return lst

        def add_j(lst):
            lst[1] += 1
            lst[2] += 1
            return lst

        lst = []
        row_len = len(matrix)
        
        if type(matrix[0]) is list:
            col_len = len(matrix[0])
        
        # If only a single column
        if col_len == 1:
            for i in range(row_len):
                lst.append(matrix[i][0])
        
        # If only a single row
        elif row_len == 1:
            for i in range(col_len):
                lst.append(matrix[0][i])
        
        else:
            lst.append(matrix[0][0])
            func = [add_j, add_i, sub_j, sub_i]
            i_start = 0
            j_start = 0
            i = j = 0
            c = 0
            r = d = 0
            while True:
                if  (i == row_len - 1 and d != 0)  or (j == col_len - 1 and r != 0) or matrix[i][j] is None:
                    c += 1

                    if c == 4:
                        c = 0
                        row_len -= 1
                        col_len -= 1
                        i_start += 1
                        j_start += 1
                        i = i_start
                        j = j_start
                    else:
                        if d != 0:
                            d = 0
                        if r != 0:
                            r = 0
                        
                    if i_start > col_len or j_start > row_len:
                        break
                
                i, j, r, d = func[c]([i, j, r, d])
                if matrix[i][j]:
                    lst.append(matrix[i][j])
                
                matrix[i][j] = None
                

        return lst
            # # Going spiral, for other cases
            # else:
            #     for i in range(col_len):
            #         lst.append(matrix[0][i])
                
            #     for i in range(1, row_len):
            #         lst.append(matrix[i][col_len - 1])

            #     for i in range(col_len - 2, 0, -1):
            #         lst.append(matrix[row_len - 1][i])
                
            #     for i in range(row_len - 1, 0, -1):
            #         lst.append(matrix[i][0])
            
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        # lst = [[1], [2], [3], [4]]
        # lst2 = [[1, 2, 3, 4]]

        
        print(self.spiral(matrix))

        # for i in range(matrix):
        #     for j in range(matrix[i]):
        #         lst.append(matrix[i][j])
"""