#include <iostream>
#include <cstdlib>
#define MAX 100

using namespace std;

int main(void)
{
    int n;
    int arr[MAX]; // maximum of 100 elements
    cout << "Enter a number: " << endl;
    cin >> n;
    
    // inputting an array
    
    for (int i=0; i<n ; i++)
    {
       arr[i] = rand(); 
    }
    
    // displaying the unsorted array
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " "; 
    }
    
    cout << endl;
    
    cout << " Ascending Order " << endl;
    // sorting the array (ascending order)
    
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // displaying the sorted array
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << " Descending order " << endl;
    // sorting array in  descending order
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // displaying the sorted array
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;   
    
}
