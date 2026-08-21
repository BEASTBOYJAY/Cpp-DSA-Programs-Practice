#include <bits/stdc++.h>
using namespace std;


// ################################################### BRUTE FORCE ###################################################

// int maxProduct(vector<int>& nums) 
// {
//     int maxProd = nums[0];

//     for (int i = 0; i < nums.size(); i++)
//     {
//         int prod = 1;

//         for (int j = i; j < nums.size(); j++) 
//         {
//             prod *= nums[j];
//             maxProd = max(maxProd, prod);
//         }
//     }

//     return maxProd;
// }

// int main() {
//     vector<int> nums = {2, 3, -2, 4};

//     cout << maxProduct(nums);
//     return 0;
// }


// ################################################### OPTIMAL APPORACH 1 ###################################################


// int maxProductSubArray(vector<int>& arr) 
// {
//     int n = arr.size();

//     int pre = 1, suff = 1;

//     int ans = INT_MIN;

//     for (int i = 0; i < n; i++) 
//     {
//         if (pre == 0) pre = 1;

//         if (suff == 0) suff = 1;

//         pre *= arr[i];

//         suff *= arr[n - i - 1];

//         ans = max(ans, max(pre, suff));
//     }

//     return ans;
// }

// int main() {
//     vector<int> arr = {2, 3, -2, 4};

//     cout << maxProductSubArray(arr) << endl;

//     return 0;
// }


// ################################################### OPTIMAL APPORACH 2 ###################################################

int maxProduct(vector<int>& nums)
{
    int res = nums[0];
    int maxProd = nums[0];
    int minProd = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        int curr = nums[i];

        if (curr < 0) swap(maxProd, minProd);

        maxProd = max(curr, maxProd * curr);
        minProd = min(curr, minProd * curr);

        res = max(res, maxProd);
    }

        return res;
}


int main() {
    vector<int> nums = {2, 3, -2, 4};
    Solution sol;
    cout << sol.maxProduct(nums);
    return 0;
}
