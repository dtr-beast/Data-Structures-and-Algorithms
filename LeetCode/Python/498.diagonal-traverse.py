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
        m = len(matrix)
        n = len(matrix[0])
        i = j = 0

        switch = True
        edge_touch = 0
        max_c = 1
        while i < m:
            while j < n:
                lst.append(matrix[i][j])
                if j < n - 1:
                    if j == max_c: 
                        edge_touch = [1, j]
                        j -= 1
                    elif edge_touch == 1:
                        pass
                    else:
                        j += 1
                    switch = False
                
                if i < m - 1:
                    if i == max_c:
                        edge_touch = [1, i]
                        i -= 1
                    elif edge_touch == [1, j]:
                        i += 1
                    elif edge_touch == [1, i]:
                        i -= 1
                    switch = True

            if edge_touch == 2:
                edge_touch = 0
                max_c += 1

        # for i in range(len(matrix)):
        #     for j in range(len(matrix[i])):
        #         lst.append(matrix[i][j])

        print(lst)
        return lst
# @lc code=end