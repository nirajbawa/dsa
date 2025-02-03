#include <iostream>
using namespace std;


int sum(int *arr, int size)
{
    if(size==0)
    {
        return 0;
    }
    else{
        return *arr + sum(arr+1, size-1);
    }

    return arr[0];   
}


int main()
{
    int arr[] = {1,2,3};
    cout << "sum is "<< sum(arr, 3);

    return 0;
}