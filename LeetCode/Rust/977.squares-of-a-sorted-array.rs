/*
 * @lc app=leetcode id=977 lang=rust
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
impl Solution {
    pub fn sorted_squares(nums: Vec<i32>) -> Vec<i32> {
        let mut square_nums: Vec<i32> = Vec::new();
        // TODO: Improve
        for num in nums.iter() {
            square_nums.push(num * num)
        }
        square_nums.sort();


        square_nums
    }
}
// @lc code=end