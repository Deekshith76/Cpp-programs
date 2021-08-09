#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    cin.ignore();
    int rooms = 0;
    while(n!=0)
    {   
        int p, q;
        cin >> p >> q;
        if(q - p >= 2) ++rooms;
        n--;
    }
    cout << rooms << endl;
}