#include <iostream>

using namespace std;

int main(void){
    int capacity = 0, max = -1;
    int n, a, b;
    cin >> n;
    while(n!=0){
        cin >> a >> b;
        capacity = capacity - a + b;
        if(max < capacity)
            max = capacity;
        n--;
    }
    cout << max << endl;
}