#include <iostream>

using namespace std;

void insSort(int a[], int n);
void insertIth(int a[], int n, int i);
void display(int a[], int n);

int main(void){
    int arr[] = {102, 343, 438, 4398, 3743, 23, 232};
    int size = sizeof(arr)/sizeof(int);
    display(arr, size);
    insSort(arr, size);
    cout << "********Final Result******"<< endl;
    display(arr, size);
    return 0;   
}

void display(int a[], int n){
    int i=0;
    while(i < n){
        cout << a[i] << " ";
        i++;
    }
    cout << endl;
}

void insertIth(int a[], int n, int i){
    int key = a[i];
    int j = i - 1 ;
    while( j >= 0 && a[j] > key){
        a[j+1] = a[j];
        j = j-1;
    }
    a[j+1] = key;
}

void insSort(int a[], int n){
    int i = 1; // start from index 1 and not zero
    
    while(i < n){
        insertIth(a, n, i);
        i++;
    }

}
