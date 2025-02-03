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
        char c = 'A' + n - row;
        while (col <= row)
        {
            cout << c << " ";
            col = col + 1;
            c++;
        }
        cout << endl;
        row++;
    }
    return 0;
}