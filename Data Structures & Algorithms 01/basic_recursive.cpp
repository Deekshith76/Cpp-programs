#include <iostream>
using namespace std;

void printOut(int n);
void printDigit(int n);

int main(void)
{
    int n;
    cout << "What's the number to be printed? ";
    cin >> n;
    printOut(n);
    cout << endl;
}

void printOut(int n)
{
    if (n >= 10)
        printOut(n/10);
    printDigit(n%10);
}

void printDigit(int n)
{
    cout << n;
}