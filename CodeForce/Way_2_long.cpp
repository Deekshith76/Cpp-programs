#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int operations;
    cin >> operations;
    cin.ignore();
    string word;
    while(operations!=0)
    {   
        getline(cin, word);
        int len = word.length();
        if(len > 10){
        cout << word[0] << len - 2 << word[len-1] << endl;
        }else{
            cout << word << endl;
        }
        operations--;
    }
}