# Grid of size n * m (n = rows, m = columns)
# count no of unique ways to reach from top left corner to bottom right corner
def countWays(n, m):
    if n == 1 or m == 1:
        return 1
    if n == 0 or m == 0:
        return 0
    return countWays(n-1, m) + countWays(n, m-1) 

print(countWays(1,1))
print(countWays(5,1))
print(countWays(0,7))
print(countWays(3,3))
print(countWays(5,4))

