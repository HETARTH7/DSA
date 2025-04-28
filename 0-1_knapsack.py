def knapsack(i, w):
    if i == len(wt) or w == 0:
        return 0
    if dp[i][w] != -1:
        return dp[i][w]
    pick = val[i]+knapsack(i+1, w-wt[i]) if w-wt[i] >= 0 else 0
    dontPick = knapsack(i+1, w)
    dp[i][w] = max(pick, dontPick)
    return dp[i][w]


val = [1, 2, 3]
wt = [4, 5, 1]
W = 4
dp = [[-1 for _ in range(W+1)] for _ in range(len(wt))]

print(knapsack(0, W))


# Time Complextity: O(n*W) optimized from O(2^n) brute force recursive soln
# Space Complexity: O(n*W)
