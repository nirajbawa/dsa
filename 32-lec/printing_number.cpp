#include <iostream>
using namespace std;


void print_no(int n, string arr[])
{
    if(n==0)
    {
        return;
    }

    int digit = n%10;
    n = n/10;
    print_no(n, arr);
    cout << arr[digit-1] << " " << endl;
}

int main()
{
    string arr[] = {
        "one", "two", "three", "four", "five", "six", "seven", 
        "eight", "nine", "zero"
    };

    print_no(123, arr);

    return 0;
}