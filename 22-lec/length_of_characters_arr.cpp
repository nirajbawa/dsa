#include <iostream>
using namespace std;



char upper_case(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return ch;
    }
    else{
        return ch - 'a' + 'A';
    }
}

int length(char name[])
{   int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int reverse_array(char name[])
{
    int n = length(name);
    int s = 0, e = n-1;

    while(s<e)
    {
        swap(name[s++], name[e--]);
    }
}



int main()
{
    char name[30];

    cin >> name;
    cout << "Length of name is : " << length(name) << endl;
    reverse_array(name);
    cout << "Reverse name "<< name << endl;
    cout << "upper case name : " << upper_case('n') << endl;

    return 0;
}