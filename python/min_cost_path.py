'''
Given a matrix of integers matrix of size n*m, where each element matrix[i][j] represents the cost of passing from that cell, create a func that returns the cost of min cost path to go from top left cell to right bottom cell, knowing that you can only move to the right or to the bottom
'''

def minCostPath(matrix, i=0, j=0):
    # SC : O(n+m)
    # the maximum size of stack is O(n+m), hence space complexity will be O(m+n)
    # TC : O(2**(m+n))
    # Each recursive callig the function twice and the height of the recursive tree is n+m-1 because at each we are either moving to the right or to the bottom, and the length of the path is n+m-1, hence we get O(2**(m+n))
    n = len(matrix) # rows
    m = len(matrix[0]) # columns
    if i == n-1 and j == m-1:
        return matrix[i][j]
    elif i == n-1:
        return matrix[i][j] + minCostPath(matrix, i, j+1)
    elif j == m-1:
        return matrix[i][j] + minCostPath(matrix, i+1, j)
    else:    
        return matrix[i][j] + min(minCostPath(matrix, i+1, j), minCostPath(matrix, i, j+1))


def minCostPath2(matrix, i=0, j=0):
    # TC : O(n*m)
    # we are filling matrix of size n*m
    # SC : O(n*m)
    # Additional matrix of size (n*m) is used
    n = len(matrix)
    m = len(matrix[0])
    costs = [[0]*m for i in range(n)] # costs matrix
    costs[0][0] = matrix[0][0] # first element
    for i in range(1, m): # topmost row
        costs[0][i] = costs[0][i-1] + matrix[0][i]
    for i in range(1, n):
        costs[i][0] = costs[i-1][0] + matrix[i][0]
    for i in range(1, n):
        for j in range(1, m): # in between elements
            costs[i][j] = matrix[i][j] + min(costs[i-1][j], costs[i][j-1])
    return costs[n-1][m-1] # last element 

        

matrix = [[3, 1, 7, 5], [6, 8, 4, 2]]
print(minCostPath(matrix))