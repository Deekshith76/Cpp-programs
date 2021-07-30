/* creates a vector that stores
one hundred perfect squares and outputs them. Notice also that size is a method that
returns the size of the vector. */
#include <iostream>
#include <vector> // inlcudes vector class

using namespace std;

int main(void)
{   
    //vector<data type> variable name(size)
    vector<int> squares(100);

    // inputting elements into vector
    for(int i=0; i < squares.size(); ++i)
    {
        squares[i] = i * i;
    }

    // outputting them
    for(int i=0; i < squares.size(); ++i)
    {
        cout << i << " " << squares[i] << endl;
    }
}