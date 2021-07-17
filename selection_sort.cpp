#include <iostream>

using namespace std;

int locOfSmallest(int a[], int start, int end);
void display(int a[], int n);
void swap(int a[], int x, int y);
void selSort(int a[], int n);

int main(void)
{
    int arr[] = { 12 , 23, 34, 1, 637, 4537, 436, 23, 42, 24 };
    int size = sizeof(arr)/sizeof(int);
    display(arr, size);
    selSort(arr, size);
    display(arr, size);
    return 0;
}

void display(int a[], int n)
{
    int i = 0;
    while(i<n)
    {
        cout << a[i] << " ";
        i++;
    }
    cout << endl;
}

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void selSort(int a[], int n)
{
    int i = 0;
    while(i < n-1)
    {
        int j = locOfSmallest(a, i , n-1);
        swap(a, i, j);
        i++;
    }
}

int locOfSmallest(int a[], int start, int end)
{
    int i = start;
    int j = i;
    
    while(i <= end)
    {
        if(a[i] < a[j])
        {
            j = i;
        }
        
        i++;
    }

    return j;
}
