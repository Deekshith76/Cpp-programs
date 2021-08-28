#include <iostream>

using namespace std;

int main(void)
{
    long long int n, m;
    int moves  = 0;
    cin >> n >> m;
    cin.ignore();
    if(m%n == 0)
    {
        m /= n;
        while(m!=1)
        {
            if(m%3 == 0)
            {
                ++moves;
                m /= 3;
            }
            else if(m%2 == 0)
            {
                ++moves;
                m /= 2;
            }
            else{
                moves = -1;
                break;
            }
        }
    }else{
        moves = -1;
    }
    cout << moves << "\n";
}