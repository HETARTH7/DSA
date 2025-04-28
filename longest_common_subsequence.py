def lcs(i, j):
    if i == len(s1) or j == len(s2):
        return 0
    if dp[i][j] != -1:
        return dp[i][j]
    if s1[i] == s2[j]:
        dp[i][j] = 1+lcs(i+1, j+1)
    else:
        dp[i][j] = max(lcs(i+1, j), (lcs(i, j+1)))
    return dp[i][j]


s1 = "AGGTAB"
s2 = "GXTXAYB"
dp = [[-1 for _ in range(len(s2))] for _ in range(len(s1))]
print(lcs(0, 0))


# Time Complexity: O(m*n) (Since we're going to every combination of i and j) optimized from O(2^min(m,n)) recursive soln)
# Space Complexity: O(m*n)
