def findBinary(num, res=""):
    if num == 0:
        return res
    res = str(num%2) + res
    return findBinary(num//2, res)

num1 = 233
num2 = 32
num3 = 156
print(findBinary(num1))
print(findBinary(num2))
print(findBinary(num3))


