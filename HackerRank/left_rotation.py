def left_rotation(a, n):
    n = n%len(a)
    return a[n:]+a[:n]

def left_rotation2(a,n):
    temp = []
    #temp = [0] * len(a)
    for i in range(len(a)):
        newLocation = (i + (len(a) - n))%len(a)
        # temp[newLocation] = a[i]
        temp.insert(newLocation, a[i])
    return temp

a = [1, 2, 3, 4, 5]
print(*left_rotation(a, 3))
print(*left_rotation(a, 7))

print(*a)

print(*left_rotation2(a, 3))
print(*left_rotation2(a, 7))
