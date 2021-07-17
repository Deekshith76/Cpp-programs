// Remove vowels from a string

#include <iostream>

using namespace std;

int main(void){
 //char str[100]; // for an array of characters
 //cout << "Enter a string : ";
 //cin  >> str; 
 // cin do not consider whole string if it has whitespaces in betweeen.Input: "Bolloju Deekshith" Output: Bolloju
 
 //cin.get(str, 25);
  //second argument will be the length that can be stored including null character
 // if your string has more than 25 characters then it will store upto 24 characters only (remaining 1 will be null operator)
 //cin.ignore(); // use this always or else the whitespaces will be stored in next string and the program terminates

 //Usage of getline
  string str;  // no need to mention length of string
  cout << "Enter a string : ";
  getline(cin, str);
 
 //cout << str << endl; 
 //cout << str1<< endl;
 // str.lenght() gives the length of the string excluding the null operator
 
 // tolower() returns the lowercase version of the character if it's an alphabet. Otherwise, it returns the character itself
 for (int i=0; i<str.length(); i++){
    if (tolower(str[i]) == 'a')
        continue;
    else if (tolower(str[i]) == 'e')
        continue;
    else if (tolower(str[i]) == 'i')
        continue;
    else if (tolower(str[i]) == 'o')
        continue;
    else if (tolower(str[i]) == 'u')
        continue;
    else
        cout << str[i] ;
 }
 cout << endl;
}
