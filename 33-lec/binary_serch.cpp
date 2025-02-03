#include <iostream>
using namespace std;


bool binary_search(int *arr, int s, int e, int key)
{
    if(s>e)
    {
        return false;
    }
    int mid = (s+(e-s)/2);
    if(arr[mid]==key)
    {
        return true;
    }
    else if(arr[mid]<key)
    {
        return binary_search(arr, (mid+1), e, key);
    }else{
        return binary_search(arr,  s, (mid-1), key);
    }
}


int main()
{
    int arr[] = {1, 3, 7, 9, 11, 12, 45};
    string ans = (binary_search(arr, 0, 7, 15))?"Yes":"No";
    cout << "Is Sorted "<< ans;

    return 0;
}