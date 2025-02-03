#include <iostream>
using namespace std;


void bubble_sort(int arr[], int n)
{
    if(n==0 || n==1)
    {
        return;
    }

    for(int i = 0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }

    bubble_sort(arr, n-1);
}

int main()
{
    int a[] = {3,1,2,4,1,5};
    bubble_sort(a, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}