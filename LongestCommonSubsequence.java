public class LongestCommonSubsequence {
    public static int lcsMemo(String s1, String s2, int m, int n, int[][] dp) {
        if (m < 0 || n < 0) {
            return 0;
        }
        if (dp[m][n] != -1)
            return dp[m][n];
        if (s1.charAt(m) == s2.charAt(n)) {
            dp[m][n] = 1 + lcsMemo(s1, s2, m - 1, n - 1, dp);
        } else
            dp[m][n] = Math.max(lcsMemo(s1, s2, m - 1, n, dp), lcsMemo(s1, s2, m, n - 1, dp));
        return dp[m][n];
    }

    public static int lcsTab(String s1, String s2, int m, int n, int[][] dp) {
        dp[m][n] = 0;
        for (int i = m - 1; i > -1; i--) {
            for (int j = n - 1; j > -1; j--) {
                if (s1.charAt(i) == s2.charAt(j))
                    dp[i][j] = 1 + dp[i + 1][j + 1];
                else
                    dp[i][j] = Math.max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
        return dp[0][0];
    }

    public static void main(String[] args) {
        String s1 = "AGGTAB";
        String s2 = "GXTXAYB";
        int m = s1.length();
        int n = s2.length();
        int[][] dp1 = new int[m + 1][n + 1];
        int[][] dp2 = new int[m + 1][n + 1];
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                dp1[i][j] = -1;
                dp2[i][j] = -1;
            }
        }
        System.out.println("LCS by memoization is: " + lcsMemo(s1, s2, m - 1, n - 1, dp1));
        System.out.println("LCS by tabular method is: " + lcsTab(s1, s2, m, n, dp2));
    }
}
