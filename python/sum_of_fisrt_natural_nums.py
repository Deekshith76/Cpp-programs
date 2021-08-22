def sums(num):
    if num <= 1:
        return num
    return num + sums(num-1)

num1 = 10
num2 = 25
num3 = 30
print(sums(num1))
print(sums(num2))
print(sums(num3))
