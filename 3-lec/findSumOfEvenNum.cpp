#include <iostream>
using namespace std;

int main()
{
    int end, sum = 0;
    cout << "Enter The Limit : " << endl;
    cin >> end;
    int i = 1;
    while (i <= end)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }

    cout << "Sum of Even No is : " << sum << endl;
    return 0;
}