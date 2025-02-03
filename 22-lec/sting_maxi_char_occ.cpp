#include <iostream>
using namespace std;

char maxi_occurrence(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        char temp = s[i];
        int number = 0;
        number = temp - 'a';
        arr[number]++;
    }

    int max = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if(max<arr[i])
        {
            ans = i;
            max = arr[i];
        }
    }

    return 'a' + ans;
}

int main()
{

    char result = maxi_occurrence("niiraj");
    cout << "result : " << result << endl;

    return 0;
}