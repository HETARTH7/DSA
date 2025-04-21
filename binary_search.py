def binary_search(nums, val):
    i, j = 0, len(nums)-1
    while i <= j:
        mid = (i+j)//2
        if nums[mid] == val:
            return mid
        elif nums[mid] > val:
            j = mid-1
        else:
            i = mid+1
    return -1


nums = [3, 4, 5, 6, 7, 8, 9]
val = 4
result = binary_search(nums, val)
if (result == -1):
    print("Element not found")
else:
    print("Element found at index: ", result)


# Time Complexity: O(logn)
# Space Complexity: O(1)
