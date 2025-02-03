#include <iostream>
using namespace std;


bool IsStringPalindrome(string &str, int i, int j)
{
    if(i>j)
    {
        return true;
    }
    if(str[i]!=str[j])
    {
        return false;
    }
    else{
        return IsStringPalindrome(str, i+1, j-1);
    }
}

int main()
{
    string str = "bab";
    cout << str << endl;
    cout << IsStringPalindrome(str, 0, str.length()-1) << endl;
    return 0;
}