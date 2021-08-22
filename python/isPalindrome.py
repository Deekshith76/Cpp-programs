def isPalindrome(string):
    n = len(string)
    
    if n == 0 or n == 1:
        return True
    
    if string[0] == string[n-1]:
        return isPalindrome(string[1:n-1])
    
    return False

str1 = "racecar"
str2 = "malayalam"
str3 = "abba"
str4 = "deekshith"
str5 = "palindrome"

print(isPalindrome(str1))
print(isPalindrome(str2))
print(isPalindrome(str3))
print(isPalindrome(str4))
print(isPalindrome(str5))

