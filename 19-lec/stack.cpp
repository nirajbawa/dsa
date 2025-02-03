#include <iostream>
#include <stack>
using namespace std;


int main()
{
    stack<string> s;

    s.push("niraj");
    s.push("bava");
    s.push("sde");

    cout << "Top Element-> " << s.top() << endl;
    
    s.pop();

    cout << "Top Element -> " << s.size() << endl;

    cout << "Empty or not " << s.empty() << endl;

    return 0;
}