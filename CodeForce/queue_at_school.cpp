#include <iostream>
#include <string>

using namespace std;

int main(void)
{   
    int n, t;
    cin >> n >> t;
    char temp;
    cin.ignore();
    string s;
    cin >> s;
    while(t!=0){
        for(int i=0; i<s.length()-1;++i)
        {
            if(s[i] == 'B' && s[i+1] == 'G'){
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
                ++i;
            }
        }
        t--;
    }
    
    cout << s << endl;
}