#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    if(n > 2){
        if(n%2 == 0)
        {
            cout<<"Yes"<<endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        cout << "NO" << endl;
    }
}