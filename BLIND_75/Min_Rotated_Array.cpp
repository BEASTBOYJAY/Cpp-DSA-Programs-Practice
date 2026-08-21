#include <bits/stdc++.h>
using namespace std;

// ###################################################### BRUTE FORCE ######################################################

// int findMin(vector<int>& nums) 
// {

//     int minVal = INT_MAX;

//     for (int i = 0; i < nums.size(); i++) 
//     {

//         minVal = min(minVal, nums[i]);
//     }

//     return minVal;
// }


// int main() 
// {
//     vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
//     int result = findMin(nums);
//     cout << "Minimum element is " << result << endl;

//     return 0;
// }



// ###################################################### OPTIMAL APPORARCH ######################################################

int findMin(vector<int>& nums) 
{
    int size=nums.size();
    int low=0;
    int high=size-1;

    while(low<high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid]>nums[high])
        {
            low=mid +1 ;
        }
        else
        {
            high=mid;
        }
    }

    return nums[low];
}


int main() 
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int result = findMin(nums);
    cout << "Minimum element is " << result << endl;

    return 0;
}