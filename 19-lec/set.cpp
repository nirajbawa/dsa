#include <iostream>
#include <set>
using namespace std;


int main()
{
    set<int> s;
    
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);


    for(int i : s)
    {
        cout << i << endl;
    }


    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(int i : s)
    {
        cout << i << endl;
    }


    cout << endl;


    cout << "5 is present or not : " << s.count(5) << endl;

    set<int>::iterator itr = s.find(6);

    for(set<int>::iterator it = itr; it!=s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}