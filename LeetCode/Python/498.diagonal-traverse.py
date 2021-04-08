# @before-stub-for-debug-begin
from python3problem498 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=498 lang=python3
#
# [498] Diagonal Traverse
#
from typing import List
# TODO: Solve
# @lc code=start
class Solution:
    lst: List[int] = []
    i = j = 0
    c = 1 

    # def j_increment(self, matrix: List[List[int]]):
    #     while self.j <= self.c:
    #         self.lst.append(matrix[self.i][self.j])
    #         self.i -= 1
    #         self.j += 1


    # def i_increment(self, matrix: List[List[int]]):
    #     while self.i <= self.c:
    #         self.lst.append(matrix[self.i][self.j])
    #         self.i += 1
    #         self.j -= 1
    
    def findDiagonalOrder(self, matrix: List[List[int]]) -> List[int]:
        if not matrix:
            return []
        
        m = len(matrix)
        n = len(matrix[0])


        self.lst.append(matrix[self.i][self.j])
        self.j += 1

        while self.c != m + n - 2:
            self.i_increment(matrix)
            self.c += 1
            self.i += 1
            self.j_increment(matrix)
            self.c += 1
            self.j += 1

        print(self.lst)
        # switch = True
        # edge_touch = 0
        # max_c = 1
        # while i < m:
        #     while j < n:
        #         lst.append(matrix[i][j])
        #         if j < n - 1:
        #             if j == max_c: 
        #                 edge_touch = [1, j]
        #                 j -= 1
        #             elif edge_touch == 1:
        #                 pass
        #             else:
        #                 j += 1
        #             switch = False
                
        #         if i < m - 1:
        #             if i == max_c:
        #                 edge_touch = [1, i]
        #                 i -= 1
        #             elif edge_touch == [1, j]:
        #                 i += 1
        #             elif edge_touch == [1, i]:
        #                 i -= 1
        #             switch = True

        #     if edge_touch == 2:
        #         edge_touch = 0
        #         max_c += 1

        # for i in range(len(matrix)):
        #     for j in range(len(matrix[i])):
        #         lst.append(matrix[i][j])

        # print(lst)
        # return lst
# @lc code=end