#include <iostream>

using namespace std;
void display(int a[], int n);
void combine(int a[], int s, int m, int e);
void mergeSort(int a[], int s, int e);
void mergeSort(int a[], int n);

int main(void){
    int arr[] = {102, 343, 438, 4398, 3743, 23, 232};
    int size = sizeof(arr)/sizeof(int);
    display(arr, size);
    mergeSort(arr, size);
    cout << "********Final Result******"<< endl;
    display(arr, size);
    return 0;

}

void display(int a[], int n){
    int i = 0;
    while(i<n){
        cout << a[i] << " ";
        i++;
    }
    cout << endl;    
}

void combine(int a[], int s, int m, int e){

    int *buffer = new int [e+1]; // takes memory from heap and creates an array of size e+1
    int k = s;
    while(k<=e){
        buffer[k] = a[k]; //copies the elements into buffer array
        k++;
    }
    
    int i = s;
    int j = m+1;
    k = s;
    while(i<=m && j<=e){ // sorts the elements into array till one of them reaches their end point
        if(buffer[i] <= buffer[j]){
            a[k] = buffer[i];
            i++;
        }else{
            a[k] = buffer[j];
            j++;
        }
    k++;
    }

// 2 while loops required to append the remaining elements of buffer into the array, though we only use one while loop

    while(i<=m){
        a[k] = buffer[i];
        k++;
        i++;
    }
    
    while(j<=e){
        a[k] = buffer[j];
        k++;
        j++;
    }
    delete[] buffer; //removing buffer array and giving back the heap of memory we used
}

void mergeSort(int a[], int s, int e) // auxillary function (or helper function)
{
    if (s>=e){
        return;
    }
    int m = (s+e)/2;
    mergeSort(a, s, m); // recursive function
    mergeSort(a, m+1, e); // these functions keep on slippting till it reaches the base case
    combine(a, s, m, e);
}


void mergeSort(int a[], int n) // wrapper function
{
    mergeSort(a, 0, n-1);// 0 and n-1 are starting and end indices
}

/*

Conclusion: 

Merge sort is much faster than other sorts
Merge sort time complexity: O(n log(n))
For remaining sorts time complexity: O(n**2)
*/

