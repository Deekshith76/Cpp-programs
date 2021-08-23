'''
Write a fucntion that counts the number of ways you can partition n objects using parts upto m (assuming m >= 0)
'''

def countPartitions(n, m):
    if n == 0:
        return 1
    elif m == 0 or n < 0:
        return 0
    else:
        return countPartitions(n-m, m) + countPartitions(n, m-1)

print(countPartitions(5, 3))
print(countPartitions(4, 3))
print(countPartitions(7, 4))
print(countPartitions(6, 5))

