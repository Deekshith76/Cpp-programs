#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int problems;
    cin >> problems;
    cin.ignore();
    int count, sum, val;
    count = sum = 0;
    vector<int> vec(3);
    while(problems!=0)
    {
        for(int i=0; i<3; ++i)
        {
            cin>> vec[i];
        }
        // for(int i=0; i<3; ++i) // we can use push_back to add elements
        // {
        //     cin >> val;
        //     vec.push_back(val);
        // }
        for(int i=0; i<vec.size(); ++i)
        {   
            sum += vec[i];
        }
        if(sum >= 2)
        {
            count++;
        }
        sum = 0;
        problems--;
    }
    cout << count << endl;
}