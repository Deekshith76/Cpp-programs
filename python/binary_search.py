def binarySearch(arr, left, right, val):
    if left > right:
        return "Not Found"
    mid = (left + right)//2
    if val == arr[mid]:
        return mid
    if val < arr[mid]:
        return binarySearch(arr, left, mid-1, val)
    return binarySearch(arr, mid+1, right, val)

arr = [-1, 0, 1, 2, 3, 4, 7, 9, 10, 20]
print(binarySearch(arr, 0, len(arr)-1, 10))
print(binarySearch(arr, 0, len(arr)-1, 5))
