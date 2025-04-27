def partition(arr, l, h):
    pivot = arr[h]
    i = l
    for j in range(l, h):
        if arr[j] <= pivot:
            arr[i], arr[j] = arr[j], arr[i]
            i += 1
    arr[i], arr[h] = arr[h], arr[i]
    return i


def quick_sort(arr, l, h):
    if l < h:
        pi = partition(arr, l, h)
        quick_sort(arr, l, pi-1)
        quick_sort(arr, pi+1, h)


data = [-2, 45, 0, 11, -9]
quick_sort(data, 0, len(data)-1)
print(data)


# Time Complexity: O(nlogn)
# Space Complexity: O(logn)
