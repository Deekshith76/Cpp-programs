def hanoi(n, start, end):
    if n == 1:
        pm(start, end)
    else:
        other = 6 - (start + end)
        hanoi(n-1, start, other)
        pm(start, end)
        hanoi(n-1, other, end)
                
def pm(start, end):
    print(f'{start} -> {end}')
    
hanoi(3,1,3)
print()
hanoi(1,1,2)
print()
hanoi(7, 2, 3)