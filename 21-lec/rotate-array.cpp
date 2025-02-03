#include <iostream>
#include <vector>
using namespace std;


int rotate_vector(vector<int> &nums, int k)
{
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i+k)%nums.size()] = nums[i]; 
    }
    nums = temp;
}

int main()
{
    vector<int> nums = {11,12,13,14};
    rotate_vector(nums, 5);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    
    return 0;
}