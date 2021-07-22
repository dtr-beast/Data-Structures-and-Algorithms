/*
 * @lc app=leetcode id=1295 lang=rust
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
impl Solution {
    pub fn find_numbers(nums: Vec<i32>) -> i32 {
        let mut even_digit = 0;
        for num in nums.iter() {
            // Convert to a string, then check if the length is even
            if num.to_string().len() & 1 == 0 {
                even_digit += 1
            }
        }
        even_digit
    }
}
// @lc code=end