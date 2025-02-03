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
        while (col <= n)
        {
            char c = 'A' + row + col - 2;
            cout << c << " ";
            col = col + 1;
            c++;
        }
        cout << endl;
        row++;
    }
    return 0;
}