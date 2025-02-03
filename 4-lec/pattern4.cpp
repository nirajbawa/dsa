#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int row = 1;
    int sum = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << sum << " ";
            col = col + 1;
            sum++;
        }
        cout << endl;
        row++;
    }
    return 0;
}