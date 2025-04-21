def linear_search(nums, val):
    for i, num in enumerate(nums):
        if num == val:
            return i
    return -1


nums = [2, 4, 0, 1, 9]
val = 1
result = linear_search(nums, val)
if (result == -1):
    print("Element not found")
else:
    print("Element found at index: ", result)
