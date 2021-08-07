#include <iostream>
#include <string>
#include <cctype> // toupper method

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s << endl;
}