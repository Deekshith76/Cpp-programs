// Avg time complexity: O(n logn)
// Worst case time complexity: O(n**2)
// Space complexity: O(1)

#include <iostream>

using namespace std;

void quickSort(int [], int , int);
int partition(int [], int, int);
void swap(int arr[], int i, int j);

int main(void){
    int arr[7] = {6, 3, 9, 5, 2, 8, 7};
    quickSort(arr, 0, 6);
    for(int i=0; i<7; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void quickSort(int arr[], int low , int high){
    if(low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j=low; j<=high-1; ++j){
        if(arr[j] < pivot){
            ++i;
            swap(arr, i, j);
        }
    }

    swap(arr, i+1, high);
    return i+1;
}

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
