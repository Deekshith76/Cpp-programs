class Solution:
    # @param A : list of integers
    # @return a list of integers
    def maxset(self, A):
        max_sum = 0
        current_sum = 0
        current_starting = -1
        max_starting = -1
        max_ending = -1
        for (index, elem) in enumerate(A):
            if elem >= 0:
                current_sum = current_sum + elem
                if current_starting == -1:
                    current_starting = index
            else:
                if current_sum > max_sum:
                    max_sum = current_sum
                    max_starting = current_starting
                    max_ending = index
                if current_sum == max_sum:
                    if (max_ending - max_starting) < (index - current_starting):
                        max_ending = index
                        max_starting = current_starting
                    elif max_ending - max_starting == index - current_starting:
                        if current_starting < max_starting:
                            max_ending = index
                            max_starting = current_starting

                current_starting = -1
                current_sum = 0

        if current_sum > max_sum:
            return A[current_starting:]

        return A[max_starting:max_ending]

s = Solution()
A = [1, 2, 5, -7, 2, 3]
B = [10, -1, 2, 3, -4, 100]
print(s.maxset(A))
print(s.maxset(B))
