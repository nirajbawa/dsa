#include <iostream>
using namespace std;

void swap_non_zero(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]!=0)
       {
            swap(arr[i], arr[j]);
            j++;
       }
    }
}

int main()
{
    int arr[5] = {0, 1, 2, 0, 0};
    swap_non_zero(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;   
}