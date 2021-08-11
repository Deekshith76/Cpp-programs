#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    double n;
    double sum  = 0;
    cin >> n;
    cin.ignore();
    vector<int> vec(n);
    for(int i=0; i<vec.size(); ++i){
        cin >> vec[i];
    }
    for(int i =0; i<vec.size(); ++i){
        sum += (double)vec[i]/100;
    }
    cout << (double)sum/n*100 << endl;
}