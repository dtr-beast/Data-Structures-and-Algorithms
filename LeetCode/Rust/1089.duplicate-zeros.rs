/*
 * @lc app=leetcode id=1089 lang=rust
 *
 * [1089] Duplicate Zeros
 */

// @lc code=start
impl Solution {
    pub fn duplicate_zeros(arr: &mut Vec<i32>) {
        let mut zeroes = 0;

        let len = arr.len();

        // Count 0s
        for i in 0..len {
            if arr[i] == 0 {
                zeroes += 1;
            }
        }
        for i in (0..len).rev() {
            // Copy values normally
            if i + zeroes < len {
                arr[i + zeroes] = arr[i];
              
            }
            // If the current value is 0, decrease the zero counter, then copy it again 
            if arr[i] == 0 {
                zeroes -= 1;

                if i + zeroes < len {
                    arr[i + zeroes] = 0
                }
            }
        }
    }
}
// @lc code=end