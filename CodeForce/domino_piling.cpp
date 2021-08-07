#include <iostream>

using namespace std;

int main(void)
{
    int M, N;
    int count;
    int dominos_per_row;
    cin >> M >> N;
    cin.ignore();
    if(M >= 1 && N>=2){
        if(N%2 == 0){
            dominos_per_row = N/2;
            count = dominos_per_row * M;
        }else{
            dominos_per_row = (N-1)/2;
            if(M>1)
                count = dominos_per_row * M + (int)M/2;
            else 
                count = dominos_per_row * M;
        }
    }else{
        count  = 0;
    }
    cout << count << endl;
}