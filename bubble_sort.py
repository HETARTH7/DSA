def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr


data = [-2, 45, 0, 11, -9]

sorted_data = bubble_sort(data)
print(sorted_data)
