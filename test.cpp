#include <iostream>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // string str = "Hello, World!";
    // int pos = str.find("World");
    // cout << pos << endl; // Output: 7
    // cout << (char) toupper('c') << endl;

    // string str = "Hello";
    // transform(str.begin(), str.end(), str.begin(), ::tolower);
    // cout << str;
    // srand(time(0));
    // int random = rand() % (10-1+1) + 1;
    // cout << random;

    // vector<int> numbers = {1, 7, 3, 5, 9, 2};
    // auto it = find(numbers.begin(), numbers.end(), 3);
    // if (it != numbers.end())
    // {
    //     cout << "The number 3 was found!";
    // }
    // else
    // {
    //     cout << "The number 3 was not found.";
    // }

    // vector<int> numbers = {1, 7, 3, 5, 9, 2};
    // sort(numbers.begin(), numbers.end());
    // if (binary_search(numbers.begin(), numbers.end(), 5)) {
    // cout << "The number 5 was found!";
    // } else {
    // cout << "The number 5 was not found.";
    // }

    // string str = "Hello, World!";
    // size_t pos = str.find("s");
    // if(pos!=string::npos)
    // {
    //     cout << pos;
    // }

    vector<int> numbers = {1, 7, 3, 5, 9, 2};
    auto it = find(numbers.begin(), numbers.end(), 3);

    if (it != numbers.end())
    {
        int index = distance(numbers.begin(), it);
        cout << numbers.at(index) << endl;
        cout << "The number 3 was found!";
    }
    else
    {
        cout << "The number 3 was not found.";
    }
    return 0;
}