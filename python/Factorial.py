def solve(A, memo= dict()):
    if A in memo:
        return memo[A]
    if(A <= 1):
        return 1
    memo[A] = A * solve(A-1, memo)
    return memo[A]
    
    
A = 5
print(str(solve(A)))