// 1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187..
// mixture of 2 series - all odd terms in this series form geometric and all the even terms form yet another geometric series. Write a program to find Nth term in series

#include <iostream>

using namespace std;

int main(void){

    int a,b,n;
    
    cout << "Enter a number : " ;
    cin >> n;
    
    for (int i=1; i<=n; i++){
        if(i%2 != 0){
            if(i==1)
                a = 1;
            else
                a = a * 2;               
        }else{
            if(i == 2)
                b = 1;
            else
                b = b * 3;   
        }
    }
    
    if(n%2!=0){
        printf("%ith term of series is %i\n", n, a);
    }else{
        printf("%ith term of series is %i\n", n, b);
    }
}
