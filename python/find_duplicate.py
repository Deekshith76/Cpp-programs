def findDuplicate(nums):
    # SC : O(1)
    # TC : O(n)
    n = len(nums)
    max_idx = 0
    max_val = 0
    for i in range(n):
        idx = nums[i]%n
        nums[idx] = nums[idx] + n
        
    for i in range(n):
        if max_val < nums[i]:
            max_val = nums[i]
            max_idx = i
        nums[i] %= n
    
    return max_idx

def findDuplicate2(nums):
    # TC : O(n)
    # SC : O(n)
    visited = {}
    for num in nums:
        if visited.get(num):
            return num
        visited[num] = True
    return None

def findDuplicate3(nums):
    # TC : O(n**2)
    # SC : O(1)
    for i in range(len(nums)-1):
        for j in range(i+1, len(nums)):
            if nums[i] == nums[j]:
                return nums[i]
    return None

arr = [1, 3, 4, 2, 2]
print(findDuplicate(arr))
print(findDuplicate2(arr))
print(findDuplicate3(arr))

