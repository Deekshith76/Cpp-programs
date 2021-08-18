#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<vec.size(); ++i)
    {
        cin >> vec[i];
    }
    cin.ignore();
    int max = -1, min = 1000;
    int max_index = -1, min_index = -1;
    for(int i=0; i<vec.size(); ++i)
    {
        if(vec[i] > max){
            max = vec[i];
            max_index = i;
        }
        if(vec[i] <= min){
            min = vec[i];
            min_index = i;
        }
    }
    if(max_index < min_index){
        cout << max_index + (vec.size() - 1 - min_index) << "\n";
    }else{
        cout << max_index + (vec.size() - 1 - min_index - 1) << "\n";
    }
}