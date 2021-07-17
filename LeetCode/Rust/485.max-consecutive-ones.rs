/*
 * @lc app=leetcode id=485 lang=rust
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
impl Solution {
    pub fn find_max_consecutive_ones(nums: Vec<i32>) -> i32 {
        // For keeping track of the max consecutive ones.
        let mut max_ones = 0;
        // For keeping track of the current consecutive ones.
        let mut curr_ones = 0;
        for num in nums.iter() {
            // Match the number with output
            match num {
                // If 1, increment the current ones.
                1 => { curr_ones += 1 }
                // anything else, reset the current ones.
                _ => {
                    max_ones = i32::max(max_ones, curr_ones);
                    curr_ones = 0;
                }
            }
        }
        // return the max consecutive ones.
        i32::max(max_ones, curr_ones)
    }
}
// @lc code=end