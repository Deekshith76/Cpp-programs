def solve(A,B):
    max_sum = 0
    if B < len(A):
        cur_sum = sum(A[:B])
        max_sum = cur_sum
        for i in reversed(range(B)): # 2,1,0 for B = 3
            cur_sum += -A[i] + A[i-B]
            if cur_sum > max_sum:
                max_sum = cur_sum
    return max_sum

A = [5, -2, 3 , 1, 2]
B = 3
print(solve(A, B))
        