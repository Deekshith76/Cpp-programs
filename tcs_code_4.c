/*The Caesar cipher is a type of substitution cipher in which each alphabet in the plaintext or messages is shifted by a number of places down the alphabet.
For example,with a shift of 1, P would be replaced by Q, Q would become R, and so on.
To pass an encrypted message from one person to another, it is first necessary that both parties have the ‘Key’ for the cipher, so that the sender may encrypt and the receiver may decrypt it.
Key is the number of OFFSET to shift the cipher alphabet. Key can have basic shifts from 1 to 25 positions as there are 26 total alphabets.
As we are designing custom Caesar Cipher, in addition to alphabets, we are considering numeric digits from 0 to 9. Digits can also be shifted by key places.
For Example, if a given plain text contains any digit with values 5 and keyy =2, then 5 will be replaced by 7, “-”(minus sign) will remain as it is. Key value less than 0 should result into “INVALID INPUT”

Example 1:
Enter your PlainText: All the best
Enter the Key: 1

The encrypted Text is: Bmm uif Cftu

Write a function CustomCaesarCipher(int key, String message) which will accept plaintext and key as input parameters and returns its cipher text as output. */

#include <stdio.h>

int main(void){
    char str[100];
    int key, left, i=0;
    printf("Enter a plain text: ");
    scanf("%[^\n]s", str);  // stores the string till the \n appears
    printf("Enter the key: ");
    scanf("%d", &key);
    if (key == 0)
        printf("INVALID INPUT\n");
    else{
        while(str[i] != '\0'){
            // this condition is for numbers in the string
            if(str[i]>=48 && str[i]<=57){
            // Ascii value for number 0-9 is 48-57
                if(str[i] + key <=57){
                    str[i] = str[i] + key;
                }else{
                   left = (str[i] + key) - 57; 
                   str[i] = 47 + left; 
                }
            }
            
            // this condition is for capital letters
            // Ascii values of A-Z is 65-90
            if (str[i]>=65 && str[i]<=90){
                if (str[i] + key <= 90){
                    str[i] = str[i] + key;
                }else{
                    left = (str[i] + key) - 90;
                    str[i] = 64 + left;
                }
            }
            
            //this condition is for small letters
            // Ascii values for a-z is 97-122
            if (str[i]>=97 && str[i]<=122){
                if(str[i] + key <= 122){
                    str[i] = str[i] + key;
                }else{
                    left = (str[i] + key)-122;
                    str[i] = 96 + left;
                }
            }
            i++;
        }
        printf("The encrypted text is : %s\n", str);
    }
}
