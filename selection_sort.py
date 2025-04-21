def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        minIdx = i
        for j in range(i+1, n):
            if arr[j] < arr[minIdx]:
                minIdx = j
        arr[i], arr[minIdx] = arr[minIdx], arr[i]
    return arr


data = [-2, 45, 0, 11, -9]

sorted_data = selection_sort(data)
print(sorted_data)


# Time Complexity: O(n^2)
# Space Complexity: O(1)
