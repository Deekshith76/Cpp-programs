#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n, k;
    cin>>n >> k;
    cin.ignore();
    vector<int> vec(n);
    int sum = 0;
    for(int i=0; i<n; ++i)
    {
        cin >> vec[i];
    }
    cin.ignore(); 
    if(vec[k-1] > 0)
    {   
        sum = k;
        for(int i=k-1; i<n-1; ++i)
        {   
            if(vec[k-1] == vec[i+1])
            {
                sum++;
            }else break;
        }
    }else{
        for(int i=0; i<k-1; i++){
            if(vec[i] > 0)
            {
                sum++;
            }else break;
        }
    }
    cout << sum << endl;
}