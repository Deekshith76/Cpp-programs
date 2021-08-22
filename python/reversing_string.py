def reverseString(string):
    if(string == ""):
        return ""
    
    return reverseString(string[1:]) + string[0]

str1 = "Ramya"
str2 = "mahender"
str3 = "i am deekshith"
print(reverseString(str1))
print(reverseString(str2))
print(reverseString(str3))

