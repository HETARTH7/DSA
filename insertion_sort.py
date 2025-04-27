def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        key = arr[i]
        j = i-1
        while j >= 0 and arr[j] > key:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key
    return arr


data = [-2, 45, 0, 11, -9]

sorted_data = insertion_sort(data)
print(sorted_data)


# Time Complexity: O(n^2)
# Space Complexity: O(1)
