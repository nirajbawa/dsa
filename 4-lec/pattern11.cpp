#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char c = 'A' + row - 1;
            cout << c << " ";
            col = col + 1;
            c++;
        }
        cout << endl;
        row++;
    }
    return 0;
}