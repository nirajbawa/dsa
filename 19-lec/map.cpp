#include <iostream>
#include <map>
using namespace std;


int main()
{
    map<int, string> m;

    m[1] = "niraj";
    m[2] = "bava";
    m[3] = "sde";

    m.insert({5, "google"});

    cout << "before erase " << endl;

    for(auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }


    cout <<  "finding -5 --> "<< m.count(3) << endl;

    m.erase(5);

    cout << "\nafter erase : " << endl;
    for(auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl << endl;


    auto it = m.find(1);

    for(auto i = it; i!=m.end(); i++)
    {
        cout << (*i).first << endl; 
    }
}