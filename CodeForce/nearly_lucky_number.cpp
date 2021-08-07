#include <iostream>

using namespace std;

int main(void)
{
    long long int n;
    cin >> n;
    int rem;
    int count = 0;
    while(n!=0){
        rem = n%10;
        if(rem == 4 || rem == 7) count++;
        n = n/10;
    }
    if(count == 7 || count == 4){
        cout << "YES" << endl;
    }else{ 
        cout << "NO" << endl;
    }
}