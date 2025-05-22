public class EditDistance {
    public static int editDistMemo(String s1, String s2, int i, int j, int[][] dp) {
        if (i == 0 || j == 0)
            return Math.max(i, j);
        if (dp[i][j] != -1)
            return dp[i][j];
        if (s1.charAt(i) == s2.charAt(j))
            dp[i][j] = editDistMemo(s1, s2, i - 1, j - 1, dp);
        else
            dp[i][j] = 1 + Math.min(editDistMemo(s1, s2, i - 1, j - 1, dp),
                    Math.min(editDistMemo(s1, s2, i - 1, j, dp), editDistMemo(s1, s2, i, j - 1, dp)));
        return dp[i][j];
    }

    public static int editDistTab(String s1, String s2, int m, int n, int[][] dp) {
        dp[0][0] = 0;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (s1.charAt(i - 1) == s2.charAt(j - 1))
                    dp[i][j] = dp[i - 1][j - 1];
                else
                    dp[i][j] = 1 + Math.min(dp[i - 1][j - 1], Math.min(dp[i - 1][j], dp[i][j - 1]));
            }
        }
        return dp[m][n];
    }

    public static void main(String args[]) {
        String str1 = "sunday";
        String str2 = "saturday";
        int m = str1.length(), n = str2.length();
        int[][] dp1 = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                dp1[i][j] = -1;
            }
        }
        System.out.println(editDistMemo(
                str1, str2, m - 1, n - 1, dp1));

        int[][] dp2 = new int[m + 1][n + 1];
        for (int i = 0; i <= m; i++)
            dp2[i][0] = i;
        for (int j = 0; j <= n; j++)
            dp2[0][j] = j;
        System.out.println(editDistTab(
                str1, str2, m - 1, n - 1, dp2));
    }
}
