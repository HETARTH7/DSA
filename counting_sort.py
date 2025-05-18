def counting_sort(arr):
    maxVal = -1
    for i in arr:
        maxVal = max(maxVal, i)
    freq, accSum = [0]*(maxVal+1), []
    for i in arr:
        freq[i] += 1
    prev = 0
    for j in freq:
        prev += j
        accSum.append(prev)
    res = [0]*len(arr)
    for i in arr:
        idx = accSum[i]-freq[i]
        freq[i] -= 1
        res[idx] = i
    return res


data = [4, 3, 12, 1, 5, 5, 3, 9]

sorted_data = counting_sort(data)
print(sorted_data)


# Time Complexity: O(n+max) where max is largest val in arr
# Space Complexity: O(max)
