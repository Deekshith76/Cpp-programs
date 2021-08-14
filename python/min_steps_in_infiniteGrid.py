# min grids to be travelled between 2 points = max(abs(x2-x1), abs(y2-y1))

def coverPoints(A, B):
    d = [0] * len(A)
    for i in range(len(A)-1):
        d[i] = max(abs(A[i+1] - A[i]), abs(B[i+1] - B[i]))
    return sum(d)

A = [0, 1, 1]
B = [0, 1, 2]
a = [4, 1, 4, 3]
b = [6, 2, 5, 1]
print(coverPoints(A, B)) # 2
print(coverPoints(a, b)) # 11