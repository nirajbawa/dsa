#include <iostream>
#include <vector>
using namespace std;


bool check_sorted_rotated(vector<int> &nums, int k)
{
    int count = 0;
    int n = nums.size();

    for (int i = 1; i < n; i++)
    {
        if(nums[i-1]>nums[i])
        {
            count++;
        }
    }

    if(nums[n-1] > nums[0])
    {
        count++;
    }

    return count <= 1;
    
}

int main()
{
    vector<int> nums = {11,12,13,14};
    bool result = check_sorted_rotated(nums, 5);
    cout << "result : " << result;
    
    return 0;
}