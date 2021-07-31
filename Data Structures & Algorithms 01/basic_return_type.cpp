#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

double randomItem1(const vector<double> & arr);
const double & randomItem2(const vector<double> & arr);

int main(void)
{
    vector<double> vec {77, 4378, 432, 438, 4732};
    double x = randomItem1(vec); //copy will be created 
    cout << x << endl;
    double y = randomItem2(vec); // copy
    cout << y << endl;
    const double & z = randomItem2(vec); // if we call a function like this, then it will not create any copy
    cout << z << endl;
}

double randomItem1(const vector<double> & arr)
{   
    srand(time(NULL)); // makes use of the computer
    return arr[rand() % (arr.size())]; // random integer between 0 to arr.size() where arr.size() is not included
}

const double & randomItem2(const vector<double> & arr)
{   
    srand(time(NULL));
    return arr[rand()%(arr.size())];
}
