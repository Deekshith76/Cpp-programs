#include <iostream>

using namespace std;

int main(void){
    int year;
    cin >> year;
    while(true){
        ++year;
        int a = year/1000; // first digit
        int b = (year/100) % 10; // second digit
        int c = (year/10) % 10; // third digit
        int d = year % 10; //fourth digit
        if(a != b && a != c && a != d && b != c && b != d && c != d){
            cout << year << endl;
            break;
        }
    }
}