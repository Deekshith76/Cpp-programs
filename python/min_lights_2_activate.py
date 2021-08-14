def solve(A, B):
    count  = 0
    i = 0
    n = len(A)
    while(i < n):
        j = min(i + B -1 , n - 1)
        flag = False
        lb = i - B + 1
        if lb < 0:
            lb = 0
        while(j >= lb):
            if A[j] == 1:
                flag = True
                count += 1
                break 
            j -= 1
        i = j + B 
        if flag == False:
            return -1
    return count

A = [ 0, 0, 1, 1, 1, 0, 0, 1]
B = 3

a = [ 0, 0, 0, 1, 0]
b = 3

print(solve(A, B))
print(solve(a, b))
