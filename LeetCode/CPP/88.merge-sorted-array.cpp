#
# @lc app=leetcode id=88 lang=python3
#
# [88] Merge Sorted Array
#

# @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        // Assign Array Sizes
        int i = m - 1, j = n - 1, k = m + n - 1;
        // Fill Values from the back of the array
        while(i >= 0 && j >= 0)
        {
            if(nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                i--;092
            }
            else
            {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        // Since i'th arrays will already hold the element
        while(j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
        
# @lc code=end