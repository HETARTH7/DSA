def editDistance(i, j):
    if not i or not j:
        return max(i, j)
    if dp[i][j] != -1:
        return dp[i][j]
    if s1[i] == s2[j]:
        dp[i][j] = editDistance(i-1, j-1)
    else:
        dp[i][j] = 1+min(editDistance(i-1, j),
                         editDistance(i, j-1), editDistance(i-1, j-1))
    return dp[i][j]


s1, s2 = "abcd", "bcfe"
m, n = len(s1), len(s2)
dp = [[-1 for _ in range(n)] for _ in range(m)]
print(editDistance(m-1, n-1))


# Time Complexity: O(m*n) using dp optimized from O(3^(m+n)) brute force recursive soln.
# Space Complexity: O(m*n)
