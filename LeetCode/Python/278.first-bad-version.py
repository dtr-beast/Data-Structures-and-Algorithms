# @before-stub-for-debug-begin
from python3problem278 import *
from typing import *
# @before-stub-for-debug-end

#
# @lc app=leetcode id=278 lang=python3
#
# [278] First Bad Version
#

# @lc code=start
# The isBadVersion API is already defined for you.
# @param version, an integer
# @return an integer
# def isBadVersion(version):

class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        l, r = 1, n
        while l < r:
            m = r + (l - r) // 2
            if isBadVersion(m):
                r = m             
            else:
                l = m + 1
        
        return l
# @lc code=end