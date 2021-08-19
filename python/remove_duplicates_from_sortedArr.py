def removeDuplicates(nums):
    # Time complexity: O(n)
    # Space complexity: O(1)
    n = len(nums)
    if n == 0:
        return 0
    i = 0
    for j in range(1, n):
        if nums[i] != nums[j]:
            i += 1
            nums[i] = nums[j]
    return i+1

nums = [1, 1, 2, 2, 2, 3, 3, 4]
print(removeDuplicates(nums))