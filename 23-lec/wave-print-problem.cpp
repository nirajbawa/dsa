#include <iostream>
#include <vector>
using namespace std;


vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int col = 0; col<mCols; col++)
    {
        if(!(col&1))
        {
            for(int row = 0; row<nRows; row++)
            {
                // cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row = nRows-1; row>=0; row--)
            {
                // cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
        cout << endl;
    }

    return ans;
}


// https://www.naukri.com/code360/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6