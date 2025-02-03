#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ans;
    
    ans.push_back(0);
    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(3);
    for(int i :ans)
    {
        cout << i << " ";
    }
    vector<int>& a = ans;
    int i = 2;
    cout << a[i];

    vector<int> t = {5,7,7,8,8,10};
    t[0] = 3;
    cout << endl<< t.size();
    return 0;
}