#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n, i;
    cin >> n;
    vector <int> vec(n);
    for(i=0; i<n; ++i)
    {
        cin >> vec[i];
        if(vec[i] == 1) break;
    }
    if(i == n) cout << "EASY" << endl;
    else cout << "HARD" << endl;
}