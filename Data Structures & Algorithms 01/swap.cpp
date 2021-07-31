#include <iostream>
#include <vector>
using namespace std;

void swap1(double &a, double &b); // 3 copies swap
void printOut(const vector<string> & arr);
void swap2(vector<string> &a, vector<string> &b);
void swap3(vector<string> &a, vector<string> &b);

int main(void)
{
    double x = 12;
    double y = 13;

    vector<string> v1 = {"apple", "banana", "guava", "mango"};
    vector<string> v2 = {"pineapple", "watermelon", "grapes"};

    vector<string> s1 = {"Deekshith", "Ramya", "Mahender", "Dhanya"};
    vector<string> s2 = {"Santhoshi", "Rohitha", "Sandeep"};
    swap1(x, y);
    swap2(v1, v2);
    swap3(s1, s2);
    cout << "x value: "<< x << " " << "y value: " << y << endl; 
    printOut(v1); 
    printOut(s2);
}

void printOut(const vector<string> & arr)
{
    for(auto & x : arr )
    {
        cout << x << endl;
    }
}

void swap1(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

// Swapping by three moves with type cast
void swap2(vector<string> &a, vector<string> &b)
{
    vector<string> temp = static_cast<vector<string> &&> (a); //converting into rvalue using static_cast
    a = static_cast< vector <string> &&> (b);
    b = static_cast< vector <string> &&> (temp);
}

// Swapping by three moves with move method
void swap3(vector<string> &a, vector<string> &b)
{
    vector<string> temp = move(a);
    a = move(b);
    b = move(temp);
}

/* function std::move exists that converts any lvalue (or rvalue) into an
rvalue. Note that the name is misleading; std::move doesn’t move anything; rather, it makes
a value subject to be moved. */
