#include <iostream>
#include <string>

using namespace std;
int main(void){
    int games, anton = 0, danik = 0;
    string s;
    cin >> games >> s;
    int len = s.length();
    for(int i=0; i<len; ++i){
        if(s[i] == 'A') anton++;
        else if(s[i] == 'D') danik++;
    }
    if(anton > danik) cout << "Anton" << endl;
    else if(danik > anton) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
}