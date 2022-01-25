/*
 * @lc app=leetcode id=1137 lang=java
 *
 * [1137] N-th Tribonacci Number
 */

// @lc code=start
class Solution {
    public int tribonacci(int n) {
        if (n < 2)
            return n;
        if (n == 2)
            return 1;
        int[] dp = new int[n + 1];
        dp[1] = 1;
        dp[2] = 1;

        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
        return dp[n];
    }

    // Iterative
    // public int tribonacci(int n) {
    // if (n < 2) return n;
    // if (n == 2) return 1;

    // int a = 0, b = 1, c = 1, sum = 0;
    // for (int i = 3; i <= n; i++) {
    // sum = a + b + c;
    // a = b;
    // b = c;
    // c = sum;
    // }
    // return sum;
    // }
}
// @lc code=end
