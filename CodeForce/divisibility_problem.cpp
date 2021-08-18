#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t ;
    while(t != 0)
    {
        long long int a, b;
        cin >> a >> b;
        cin.ignore();
        if(a % b != 0)
        {   
            cout << (a/b + 1) * b - a << "\n";
        }else{
            cout << 0 << "\n";
        }
        t--;
    }
}