#include <iostream>

using namespace std;

void swap(int a[], int x, int y);
void bubble(int a[], int n);
void display(int a[], int n);
void bubbleSort(int a[], int n);

int main(void)
{
    int arr[] = {102, 343, 438, 4398, 3743, 23, 232};
    int size = sizeof(arr)/sizeof(int);
    display(arr, size);
    bubbleSort(arr, size);
    cout << "********Final Result******"<< endl;
    display(arr, size);
    return 0;
}

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void bubble(int a[], int n)
{
    int i = n-1;
    while(i > 0)
    {
        if (a[i] < a[i-1])
        {
            swap(a, i, i-1);
        }
        
        i--;
    }
}

void bubbleSort(int a[], int n)
{
    int i=0;
    while(i<n-1)
    {
        bubble(a, n);
        cout << " Bubble sorted: " << i+1 << endl;
        display(a, n);
        i++;
    }
}

void display(int a[], int n)
{
    int i =0;
    while(i<n)
    {
        cout << a[i] << " ";
        i++;
    }
    cout << endl;
}


