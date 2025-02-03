#include <iostream>
#include <vector>
using namespace std;


void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i<arr.size()-1; i++)
    {
        int midIndex = i;
        for(int j = i+1; j<arr.size(); j++ )
        {
            if(arr[j]<arr[midIndex])
            {
                midIndex = j;
            }
        }
        swap(arr[midIndex], arr[i]);
    }
}

// o(n^2)