#include <iostream>
using namespace std;

int seq(int n)
{
    int n1 = 0, n2 = 1, n3;
    cout << "0 1 ";
    for (int i = 2; i <= n; i++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
}

int main()
{
    int n;
    cin >> n;
    seq(n);
    return 0;
}