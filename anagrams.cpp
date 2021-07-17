/*
    Anagrams
2 strings are said to be anagrams if
1) They have same length
2) They have equal number of characters with different order
3) One string can be formed from another string

Examples:
angle , angle
hare, hear
*/

#include <iostream>
#include <bits/stdc++.h> // sort() 

using namespace std;

int main(void){
    string s1 = "angel";
    string s2 = "angle";
    int length1 = s1.length();
    int length2 = s2.length();
    if (length1 == length2){
        sort(s1.begin(), s1.end()); //sort the string s1
        sort(s2.begin(), s2.end());
       // cout << s1 << "\n" << s2 << endl;
        if (s1==s2){
            cout << "The given strings are Anagrams"<<endl;
        }else{
            cout << "The given strings are not Anagrams" << endl;
        }
    }else{
        cout << "The given strings are not Anagrams" << endl;
    }  
}

