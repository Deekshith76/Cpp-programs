'''
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I

Input: s = "A", numRows = 1
Output: "A"
'''

def convert(s, numRows):
    if numRows == 1: return 
    
    res =  ''
    for r in range(numRows):
        increment = (numRows - 1) * 2
        for i in range(r, len(s), increment):
            # this loop runs only for length of string times
            res += s[i]
            if (r > 0 and r < numRows - 1 and i + increment - 2 * r < len(s)):
                res += s[i + increment - 2 * r]
    return res
# space complexity : O(s), s = length of string
            
s1 = 'PAYPALISHIRING'
n1 = 3
n2 = 4
s2 = 'ABCD'
n3 = 1

print(convert(s1, n1))
print(convert(s1, n2))
print(convert(s2, n3))

