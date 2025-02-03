#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("niraj");
    q.push("bava");
    q.push("sde");

    cout << "size before pop " << q.size() << endl;

    cout << "first element " << q.front() << endl;

    q.pop();

    cout << "First element " << q.front() << endl;

    cout << "size after pop " << q.size() << endl;

    return 0;
}