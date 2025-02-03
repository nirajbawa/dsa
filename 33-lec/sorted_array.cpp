#include <iostream>
using namespace std;


bool isSorted(int *arr, int size)
{
    if(size==1 || size == 0)
    {
        return true;
    }  
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        return isSorted(arr+1, size-1);
    }
}


int main()
{
    int arr[] = {1,2,3};
    string ans = (isSorted(arr, 3))?"Yes":"No";
    cout << "Is Sorted "<< ans;

    return 0;
}