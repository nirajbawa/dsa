#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int val = 1;
    int row = 1;
    while (row <= n)
    {
        int space = 1;
        while (space <= n - row)
        {
            cout << "  ";
            space++;
        }

        int col = 1;
        while (col <= row)
        {
            cout << col << " ";
            col++;
        }

        col = 1;
        while (col <= row - 1)
        {
            cout << row-col << " ";
            col++;
        }

        cout << endl;
        row++;
    }
    return 0;
}