def merge_sort(arr):
    n = len(arr)
    if n > 1:
        r = n//2
        arr1, arr2 = arr[:r], arr[r:]
        merge_sort(arr1)
        merge_sort(arr2)

        i = j = k = 0
        while i < len(arr1) and j < len(arr2):
            if arr1[i] <= arr2[j]:
                arr[k] = arr1[i]
                i += 1
            else:
                arr[k] = arr2[j]
                j += 1
            k += 1
        while i < len(arr1):
            arr[k] = arr1[i]
            i += 1
            k += 1
        while j < len(arr2):
            arr[k] = arr2[j]
            j += 1
            k += 1


data = [-2, 45, 0, 11, -9]

merge_sort(data)
print(data)


# Time Complexity: O(nlogn) -> O(logn) for recursively splitting the arr in 2 halves and for each subarr, O(n) time for merge op.
# Space Complexity: O(n)
