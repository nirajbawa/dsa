#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> v;

    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(1);

    v.push_back(2);
    cout << "capacity -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity -> " << v.capacity() << endl;

    cout << "Size -> " << v.size() << endl;

    cout << "Element at 2nd Index : " << v.at(2) << endl;
    cout << "Front " << v.front() << endl;
    cout << "Back " << v.back() << endl;


    cout << "\n\nbefore pop " << endl;
    
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    v.pop_back();

    cout << "\n\nafter pop "<< endl;

    for(int i : v)
    {
        cout << i << " ";
    }


    


    return 0;
}