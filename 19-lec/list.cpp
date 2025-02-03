#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout <<  i << " ";
    }
    
    l.erase(l.begin());
    cout << "\nList after erase : " << endl;

    for(int i : l)
    {
        cout << i << " ";
    }

    cout << "\n\n";

    list<int> ln(5, 100);

    for(int i:ln)
    {
        cout << i << " ";
    }
    

    return 0;
}