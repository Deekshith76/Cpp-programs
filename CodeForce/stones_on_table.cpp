#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    cin >> s;
    int count = 0;
    if(s.length() > 1){
        for(int i=0; i<s.length()-1; ++i)
        {
            if(s[i] == s[i+1]) count++;
        }
    }
    cout << count << endl;
}