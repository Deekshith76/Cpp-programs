#include <iostream>

using namespace std;

int main(void)
{
    long long int n;
    cin >> n;
    if(n%2 == 0){
        cout << n/2 << endl;
    }else{
        long long int d = (n/2) + 1;
        cout << -d << endl;
    }
}