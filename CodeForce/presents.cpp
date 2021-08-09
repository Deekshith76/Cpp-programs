#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n, k;
    cin >> n;
    vector<int> vec(n+1);
    for(int i = 1; i<=n ; ++i)
    {
        cin >> k;
        vec[k] = i;
    }
    for(int i=1; i<=n; ++i)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}