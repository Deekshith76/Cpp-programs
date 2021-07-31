#include <iostream>
#include <vector>

using namespace std;

vector<int> partialSum(const vector<int> & arr);
void printOut(const vector<int> & sums);

int main(void)
{
    vector<int> vec;
    vec = {23, 7, 34, 11, 32, 16};
    vector<int> sums = partialSum(vec);
    printOut(sums);
}

void printOut(const vector<int> & sums)
{
    for(int i = 0; i < sums.size(); ++i)
    {
        cout << sums[i] << endl;
    }
}

vector<int> partialSum(const vector<int> & arr)
{
    vector<int> result(arr.size());
    result[0] = arr[0];
    for(int i=1; i<arr.size(); ++i)
    {
        result[i] = result[i-1] + arr[i];
    }
    return result;
}