#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main(void){
    string s;
    cin >> s;
    int up = 0, low = 0;
    for(int i=0; i<s.length(); ++i){
        if(s[i] >= 65 && s[i] <=90) up++;
        else low++;
    }
    if(up > low){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
}