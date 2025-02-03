#include <iostream>
using namespace std;


int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }


    cout << (n-1) << endl;

    return n * factorial(n-1);
}


int main()
{
    int ans = factorial(5);
    cout << "ans : " << ans << endl;
    return 0;
}