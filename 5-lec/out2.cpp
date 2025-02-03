#include <iostream>
using namespace std;

int main()
{
    int a, b = 1;
    a = 1;
    if (a-- > 0 && ++b > 2)
    {
        cout << "stage 1";
    }
    else
    {
        cout << "stage 2";
    }
    cout << endl
         << a << " " << b << endl;
    return 0;
}