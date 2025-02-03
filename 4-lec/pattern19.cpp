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

        int col = n;
        while (col > row - 1)
        {
            cout << n - col + 1 << " ";
            col--;
        }

        int space = 1;
        while (space <= row - 1)
        {
            cout << "* ";
            space++;
        }

        space = 1;
        while (space <= row - 1)
        {
            cout << "* ";
            space++;
        }

        col = n;
        while (col > row - 1)
        {
            cout <<  col-row+1  << " ";
            col--;
        }

        cout << endl;
        row++;
    }
    return 0;
}