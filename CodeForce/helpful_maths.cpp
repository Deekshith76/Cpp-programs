#include <iostream>
#include <string>
#include <algorithm> // for sort method

using namespace std;

int main(void)
{
    string s, res;
    cin >> s;
    for(int i = 0; i<s.length(); ++i){
        if(s[i] != '+')
            res.push_back(s[i]);
    }
    sort(res.begin(), res.end());
    cout << res[0];
    for(int i=1; i<res.length(); ++i){
        cout << '+' << res[i];
    }
    cout << endl;
}