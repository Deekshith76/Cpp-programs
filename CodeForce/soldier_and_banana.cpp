#include <iostream>

using namespace std;

int main(void){
    int k, n, w;
    cin >> k >> n >> w;
    int cost, borrow = 0;
    cost = ((w*(w+1))/2) * k ;
    if(cost > n)
        borrow = cost - n;
    cout << borrow << endl;
}