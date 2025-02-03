#include <iostream>
using namespace std;


bool is_present(int arr[3][4], int n, int m, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == target)
            {
                return true;
            }
        }
        
    }
    return false;
}

int main()
{
    int arr[3][4] = {{
        1, 2, 3, 4
    }, {
        5, 6, 7, 8
    }, {
        9, 10, 11, 12
    }};

    cout << is_present(arr, 3, 4, 0);

    return 0;
}