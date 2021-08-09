#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int group = 1;
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; ++i)
    {
        cin >> vec[i];
    }
    for(int i=0; i<n-1 ; ++i){
        if(vec[i] == vec[i+1])
            continue;
        ++group;
    }
    cout << group << endl;
}