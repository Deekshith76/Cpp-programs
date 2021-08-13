#include <iostream>

using namespace std;

void bubbleSort(int arr[], int len);
void swap(int arr[], int i, int j);

int main(void)
{
    int array[6] = {12, 34, 9, 43, 2, 7};
    bubbleSort(array, 6);
    for(int i=0; i<6; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int len)
{
    int counter = 1;
    while(counter < len)
    {
        for(int i=0; i<len-counter; ++i) // n - i iterations in total
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr, i, i+1);
            }
        }
        counter++;
    }
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}