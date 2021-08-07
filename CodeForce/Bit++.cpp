#include <iostream>
#include <string>
using namespace std;

int main(void){
    int n, x = 0;
    string res;
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; ++i)
    {
        cin >> res;
        if(res[0] == 'X'){
            if(res[1] == '+'){
                x++;
            }else x--;
        }else if(res[0] == '+'){
            x++;
        }else x--;
    }
    cout << x << endl;
}