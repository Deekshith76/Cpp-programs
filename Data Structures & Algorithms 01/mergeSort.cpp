#include <iostream>

using namespace std;

void mergeSort(int *, int , int);
void merge(int *, int , int , int);
void printArray(int arr[], int length);

int main(void)
{
    int array[6] = {12, 34, 9, 43, 2, 7};
    mergeSort(array, 0, 5); // start index and end index
    printArray(array, 6);
}

void mergeSort(int *A, int start, int end){
    if(start < end){
        int mid = (start + end)/2;
        mergeSort(A, start, mid);
        mergeSort(A, mid+1, end);
        merge(A, start, mid, end);
    }
}

void merge(int *A, int start , int mid , int end){
    int temp[end - start + 1];
    int i = start, j = mid + 1, k = 0;
    while(i <= mid && j <= end){
        if(A[i] <= A[j]){
            temp[k] = A[i];
            k++; i++;
        }else{
            temp[k] = A[j];
            k++; j++;
        }
    }
    while(i<=mid){
        temp[k] = A[i];
        k++; i++;
    }
    while(j<=end){
        temp[k] = A[j];
        k++; j++;
    }

    for(i=start; i<=end; i+= 1)
    {
        A[i] = temp[i - start];
    }
}

void printArray(int arr[], int length){
    for(int i=0; i<length; ++i){
        cout << arr[i] << " " ;
    }
    cout << endl;
}