def solve(nums):
    max_ending_here = nums[0]
    max_so_far = nums[0]
    
    for i in range(0, len(nums)):
        
        max_ending_here = max(max_ending_here + nums[i], nums[i])
        max_so_far = max(max_ending_here, max_so_far)
        
    return max_so_far

A = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
print(solve(A))