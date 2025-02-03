#include <iostream>
using namespace std;

void reverse(int *arr, int n)
{
    int start = 0;
    int end = n;
    while(start>end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

int main()
{
    int arr[5] = {1, 2, 3, 4};
    reverse(arr, 5);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}