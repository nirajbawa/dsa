#include <iostream>
using namespace std;


bool linear_search(int *arr, int size, int key)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    else{
        return linear_search(arr+1, size-1, key);
    }
}


int main()
{
    int arr[] = {1,2,3};
    string ans = (linear_search(arr, 3, 2))?"Yes":"No";
    cout << "Is Exists "<< ans;

    return 0;
}