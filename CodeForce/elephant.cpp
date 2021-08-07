#include <iostream>

using  namespace std;

int main(void)
{
    int n;
    cin >> n;
    int steps = 0;
    if(n%5 == 0)
    {
        steps = n/5;
    }else{
        steps = n/5 + 1;
    }

    cout << steps << endl;
}