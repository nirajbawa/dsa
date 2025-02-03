#include <iostream>
using namespace std;

void  merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while(i<n && j<m)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    while(i<n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j<m)
    {
        arr3[k] = arr1[i];
        k++;
        j++;
    }
    
}

int main()
{
    int arr1[3] = {5, 6, 7};
    int arr2[4] = {1, 2, 3, 4};
    int arr3[7];

    merge(arr1, 3, arr2, 4, arr3);

    for (int i = 0; i < 7; i++)
    {
        cout << arr3[i] << " ";
    }
    

    return 0;
}