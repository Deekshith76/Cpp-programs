def myPow(x, n): # x = base as float, n = exponent as int, return float
    
    # Time complexity: O(log(n))
    def helper(x, n):
        if n == 0: return 1
        if x == 0: return 0
        
        res = helper(x, n//2)
        res = res * res
        return x * res if n%2 != 0 else res
        
    res = helper(x, abs(n))
    return res if n >= 0 else 1/res

def myPow2(x, n):
    # Time complexity: O(n)
    res = 1
    temp = abs(n)
    while(temp!=0):
        res = x * res
        temp -= 1
    return res if n >= 0 else 1/res

print(myPow(2.000, 10))
print(myPow(5.001, 4))
print(myPow(2.334, -125))
print()
print(myPow2(2.000, 10))
print(myPow2(5.001, 4))
print(myPow2(2.334, -125))

    