#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s1, s2;
    cin >> s1 >> s2;
    cin.ignore();
    if(s1.length() != s2.length()){
        cout << "NO" << endl;
    }else{
        int size = s1.length();
        int count = 0;
        for(int i=0; i<size; ++i)
        {
            if(s1[i] != s2[size-1-i]){
                cout << "NO" << endl;
                break;
            }
            count++;
        }

        if(count == size)
            cout << "YES" << endl;
    }
}