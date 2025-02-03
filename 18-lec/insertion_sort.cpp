#include <iostream>
using namespace std;


void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i-1;
        int temp = arr[i];
        while (j>=0)
        {
            if(arr[j]>temp)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }

        arr[j+1] = temp;
    }
    
}

int main()
{
    int arr[10] = {4, 12, 11, 20};
    int n = 4;
    insertion_sort(arr, n);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n";
    return 0;
}


// O(n^2)