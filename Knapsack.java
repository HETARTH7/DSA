public class Knapsack {
    public static int knapSackMemo(int W, int[] wt, int[] val, int n, int[][] dp) {
        if (n < 0 || W == 0)
            return 0;
        if (dp[n][W] != -1)
            return dp[n][W];
        int pick = 0;
        if (W - wt[n] >= 0)
            pick = val[n] + knapSackMemo(W - wt[n], wt, val, n - 1, dp);
        dp[n][W] = Math.max(pick, knapSackMemo(W, wt, val, n - 1, dp));
        return dp[n][W];
    }

    public static void main(String args[]) {
        int val[] = new int[] { 60, 100, 120 };
        int wt[] = new int[] { 10, 20, 30 };
        int W = 50;
        int n = val.length;
        int[][] dp1 = new int[n + 1][W + 1];
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= W; j++) {
                dp1[i][j] = -1;
            }
        }
        System.out.println("Memoization: " + knapSackMemo(W, wt, val, n - 1, dp1));
    }
}
