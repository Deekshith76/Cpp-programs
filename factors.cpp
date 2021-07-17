#include <iostream>

using namespace std;

int main(void){
    int n;
    cout << "Enter a numbber: ";
    cin >> n;
    for (int i=1; i<n ; i++){
        if(n%i == 0)
            cout << i << " ";
    }
    cout << endl;
}
