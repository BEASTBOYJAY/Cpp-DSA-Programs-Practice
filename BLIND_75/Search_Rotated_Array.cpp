#include <bits/stdc++.h>
using namespace std;


// ###################################################### BRUTE FORCE ######################################################

// int search(vector<int>& nums, int target)
// {

//     for (int i = 0; i < nums.size(); i++) 
//     {

//         if (nums[i] == target)
//         {
//             return i;
//         }
//     }

//     return -1;
// }

// int main() {
//     vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
//     int target = 0;
//     int index = search(nums, target);

//     cout << index << endl;

//     return 0;
// }



// ###################################################### OPTIMAL APPORACH ######################################################

int search(vector<int>& nums, int target)
{
    int size = nums.size();
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) return mid;

        if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (nums[mid] < target && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    
    return -1;
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int index = search(nums, target);

    cout << index << endl;

    return 0;
}
