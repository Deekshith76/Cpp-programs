#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n, h;
    cin >> n >> h;
    cin.ignore();
    int width = 0;
    vector<int> a(n);
    for(int i=0; i<n; ++i)
        cin >> a[i];
    for(int i=0; i<n; ++i){
        if(a[i] > h) width += 2;
        else ++width;
    }
    cout << width << endl;
}