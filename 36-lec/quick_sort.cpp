#include <iostream>
using namespace std;


int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;

    for (int i = s+1; i <= e; i++)
    {
        if(arr[i]<=pivot)
        {
            cnt++;
        }   
    }


    int pivotIndex = s+cnt;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;
    while (i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<pivot)
        {
            i++;
        }

        while (arr[j]>pivot)
        {
            j--;
        }

        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        
    }

    return pivotIndex;
    
    
}

void quick_sort(int arr[], int s, int e)
{
    if(s>=e){
        return;
    }

    int p = partition(arr, s, e);

    quick_sort(arr, s, p-1);
    quick_sort(arr, p+1, e);
}


int main()
{
    int arr[] = {2,5,7,8,1,3};
    int n = 6;
    
    quick_sort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    
    return 0;
}