/*
 * @lc app=leetcode id=509 lang=java
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
    public int fib(int n) {
        if (n < 2) {
            return n;
        }
        int[] dp = new int[n + 1];
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
    
    // Iterative
    // public int fib(int n) {
    //     if (n < 2) {
    //         return n;
    //     }
    //     int i = 0, j = 1;
    //     int sum = 0;
    //     for (int k = 1; k < n; k++) {
    //         sum = j + i;
    //         i = j;
    //         j = sum;
    //     }
    //     return sum;
    // }
}
// @lc code=end

