def solve(nums):
    max_ending_here = nums[0]
    max_so_far = nums[0]
    
    for i in range(0, len(nums)):
        
        max_ending_here = max(max_ending_here + nums[i], nums[i])
        max_so_far = max(max_ending_here, max_so_far)
        
    return max_so_far

def maxSubarray3(nums):
    # TC : O(n^2)
    # SC : O(1)
    max_sum = -100000
    cur_sum = 0
    for i in range(len(nums)):
        for j in range(i, len(nums)):
            cur_sum += nums[j]
            max_sum = max(cur_sum, max_sum)
        cur_sum = 0
    return max_sum

def maxSubarray2(nums):
    # TC : O(n^3)
    # SC: O(1)
    max_sum = -1000000
    cur_sum = 0
    for i in range(len(nums)):
        for j in range(i, len(nums)):
            for k in range(i, j+1):
                cur_sum += nums[k]
            max_sum = max(cur_sum, max_sum)
            cur_sum = 0
            
    return max_sum

A = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
print(solve(A))