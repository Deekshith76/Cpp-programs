#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for(int i=1; i<n; ++i){
        if(i%2 != 0){
            cout << "I hate that ";
        }else{
            cout << "I love that ";
        }
    }
    if(n%2 == 0){
        cout << "I love it";
    }else{
        cout << "I hate it";
    }
}