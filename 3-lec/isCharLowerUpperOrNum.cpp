#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z')
    {
        cout << "give character is lowercase" << endl;
    }
    else if (c >= 'A' && c <= 'Z')
    {
        cout << "give character is uppercase" << endl;
    }
    else if (c >= '0' && c <= '9')
    {
        cout << "give character is numeric" << endl;
    }
    else
    {
        cout << "give character is special character" << endl;
    }
    return 0;
}
