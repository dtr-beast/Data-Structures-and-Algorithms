from typing import List
#
# @lc app=leetcode id=84 lang=python3
#
# [84] Largest Rectangle in Histogram
#

# @lc code=start


class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        stack: List[(int, int)] = []
        max_area = 0
        i = 0

        for i in range(len(heights)):
            if not stack:
                stack.append((i, heights[i]))
                continue
            
            if heights[i] < stack[-1][1]:
                idx = i
                while stack and heights[i] < stack[-1][1]:
                    idx, height = stack.pop()
                    max_area = max(max_area, height * (i - idx))
                
                stack.append((idx, heights[i]))
            
            elif heights[i] > stack[-1][1]:
                stack.append((i, heights[i]))
            else:
                stack.append((stack[-1][0], heights[i]))
        
        i += 1
        while stack:
            idx, height = stack.pop()
            max_area = max(max_area, height * (i - idx))  
        
        return max_area

# @lc code=end

