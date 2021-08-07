#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<vector<int> > vec(5, vector<int>(5)); // this creates a vector of 5 size 5 vectors filled with 0
    int moves =  0;
    for(int i=0; i<5; ++i){
        for(int j=0; j<5; ++j){
            cin >> vec[i][j];
        }
    }
    cin.ignore();
    for(int i=0; i<5; ++i){
        for(int j=0; j<5; ++j){
            if(vec[i][j] == 1){
                if(i>2){
                    moves += i - 2;
                }else{
                    moves += 2 - i;
                }

                if(j>2){
                    moves += j - 2;
                }else{
                    moves += 2 - j;
                }
            }
        }
    }

    cout << moves << endl;
}