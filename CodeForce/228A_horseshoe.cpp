#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int count  = 1;
    vector<long long int> vec(4);
    for(int i=0; i<4; ++i){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    for(int i=0; i<3; ++i){
        if(vec[i] != vec[i+1]) count++;
    }
    cout << 4 - count << endl;

}