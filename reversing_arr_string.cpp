#include <iostream>
#include <algorithm> // for reverse() function
#include <cstring> // for begin() and end() 

using namespace std;
char *Rev(char *str);

int main(void){
   /* int arr[] = {4, 3, 7, 19, 2};
    int length = sizeof(arr)/sizeof(int); //length = 5
    
    for (int i = length-1; i>=0; i--){
        cout << arr[i] << " " ;
    }
    cout << endl; */
    int arr[5];
    
    cout << "Enter numbers " <<endl;
    for(int i=0; i<=4; i++){
        cin >> arr[i];
    }
    
    for(int i=4; i>=0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // String Reversing
    
    // Method 1
    char str[]= "Bolloju Deekshith";
    /* reverse(str.begin(), str.end()); */
    Rev(str);
    cout << str << endl;
    //strrev() reverses the string and for using that we need to include string.h or cstring file
    
}

char *Rev(char *str){
    int length = str.length(); //strlen(str)
    int n = length -1 ;
    char temp;
    for (int i = 0; i<=(length/2); i++){
        temp = str[i];
        str[i] = str[n];
        str[n] = temp;
        n--; // reduce the index from last too
    }
    return str;
}
