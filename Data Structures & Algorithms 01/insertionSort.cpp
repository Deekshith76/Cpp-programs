#include <iostream>

using namespace std;

void insertionSort(int arr[], int length);
void printArray(int arr[], int length);

int main(void){
    int array[6] = {12, 34, 9, 43, 2, 7};
    insertionSort(array, 6);
    printArray(array, 6);
}

void insertionSort(int arr[], int length){
    int i, j, key;
    for(i=1; i<length; ++i){
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void printArray(int arr[], int length){
    for(int i=0; i<length; ++i){
        cout << arr[i] << " " ;
    }
    cout << endl;
}


// Worst Case Time Complexity [ Big-O ]: O(n2)

// Best Case Time Complexity [Big-omega]: O(n)

// Average Time Complexity [Big-theta]: O(n2)