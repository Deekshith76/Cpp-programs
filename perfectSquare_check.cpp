#include <iostream>
#include <math.h> // for using square root

using namespace std;

int main(void){
   int n;
   cout << "Enter a number: ";
   cin >> n;
   
   int s = sqrt(n); 
   
   if (s*s == n)
        cout << "Number is a perfect square" << endl;
   else
        cout << "Number is not a perfect square" << endl; 
}
