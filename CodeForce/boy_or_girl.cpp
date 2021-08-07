#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    int count = 1;
    sort(s.begin(), s.end());
    for(int i=1; i<s.length(); ++i)
    {
        if(s[i] != s[i-1]) count++;
    }
    if(count % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }
}