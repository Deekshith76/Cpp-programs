#include <iostream>

using namespace std;

void selectionSort(int arr[], int len);
void swap(int arr[], int i, int j);

int main(void)
{
    int array[6] = {12, 45, 23, 51, 19, 8};
    selectionSort(array, 6);
    for(int i=0; i<6; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int len)
{
    for(int i=0; i<len-1; ++i)
    {
        for(int j=i+1; j<len; ++j)
        {
            if(arr[j] < arr[i]){
                swap(arr, i, j);
            }
        }
    }
}

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}