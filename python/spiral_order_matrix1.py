class Solution:
    def spiral(self, A):
        res = []
        top = 0
        down = len(A) - 1
        left = 0
        right = len(A[0]) - 1
        direction = 0
        while(top <= down and left <= right):
            if(direction == 0):
                for i in range(left, right+1):
                    res.append(A[top][i])
                top += 1
                
            elif (direction == 1):
                for i in range(top, down+1):
                    res.append(A[i][right])
                right -= 1
                
            elif (direction == 2):
                for i in range(right , left-1, -1):
                    res.append(A[down][i])
                down -= 1
                
            elif (direction == 3):
                for i in range(down , top-1, -1):
                    res.append(A[i][left])
                left += 1
            
            direction = (direction + 1) % 4

        return res


s = Solution()
arr = [
    [ 1, 2, 3 ],
    [ 4, 5, 6 ],
    [ 7, 8, 9 ]
]

print(s.spiral(arr)) #[1, 2, 3, 6, 9, 8, 7, 4, 5]
