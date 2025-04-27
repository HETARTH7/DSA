def fractionalKnapsack(items, W):
    items.sort(key=lambda x: x[0]/x[1], reverse=True)
    res = 0
    for item in items:
        if W-item[1] >= 0:
            W -= item[1]
            res += item[0]
        else:
            res += (item[0]/item[1])*W
    return res


profit = [60, 100, 120]
wt = [10, 20, 30]
W = 50
items = [(profit[i], wt[i]) for i in range(len(wt))]
print(fractionalKnapsack(items, W))

# Time Complexity: O(nlogn) -> Sorting the arr O(nlogn) + O(n) for interating in it
# Space Complexity: O(1)
