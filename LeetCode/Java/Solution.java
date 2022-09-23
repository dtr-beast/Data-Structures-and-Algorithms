import java.util.Arrays;
import java.util.HashMap;

class Solution {
    public int rob(int[] nums) {
        int len = nums.length;
        if (len <= 3) {
            return Arrays.stream(nums).max().getAsInt();
        }

        int[] dp = new int[len + 1];
        int[] dpr = new int[len + 1];

        dp[1] = nums[0];
        dpr[1] = nums[len - 1];

        HashMap<Integer, Boolean> m = new HashMap<>();
        HashMap<Integer, Boolean> mr = new HashMap<>();

        int i = 2;
        int firstHome = 1;
        int lastHome = 1;

        for (; i < len; i++) {

            dp[i] = Math.max(dp[i - 1], dp[i - 2] + nums[i - 1]);
            dpr[i] = Math.max(dpr[i - 1], dpr[i - 2] + nums[len - i - 1]);

            if (dp[i] == dp[firstHome] || m.containsKey(dp[i] - nums[i - 1])) {
                firstHome = i;
                m.put(dp[i], true);
            }
            if (dpr[i] == dpr[lastHome] || mr.containsKey(dpr[i] - nums[len - i - 1])) {
                lastHome = i;
                mr.put(dp[i], true);
            }
        }

        if (i - 1 == firstHome) {
            dp[i] = dp[i - 1];
        } else {
            dp[i] = Math.max(dp[i - 1], dp[i - 2] + nums[i - 1]);
        }
        if (i - 1 == lastHome) {
            System.out.println('h');
            dpr[i] = dpr[i - 1];
        } else {
            System.out.println('n');
            dpr[i] = Math.max(dpr[i - 1], dpr[i - 2] + nums[len - i]);
        }

        for (int ele : dp) {
            System.out.print(ele + " ");
        }
        System.out.println();
        for (int ele : dpr) {
            System.out.print(ele + " ");
        }
        System.out.println();

        return Math.max(dp[len], dpr[len]);
    }
}