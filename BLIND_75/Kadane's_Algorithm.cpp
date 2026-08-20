#include<bits/stdc++.h>
using namespace std;


// ########################################## BRUTE FORCE ##########################################

// int maxSubArray(vector<int>& nums)
// {
//     int maxi = INT_MIN; 

//     for (int i = 0; i < nums.size(); i++)
//     {
            
//         for (int j = i; j < nums.size(); j++) 
//         {
                
//             int sum = 0; 

//             for (int k = i; k <= j; k++) 
//             {
//                 sum += nums[k];
//             }

//             maxi = max(maxi, sum);
                
//         }
//     }
        
//        return maxi; 
// }

// int main() {
//     vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int maxSum = maxSubArray(arr);
    
//     cout << "The maximum subarray sum is: " << maxSum << endl;
// }




// ########################################## BRUTE APPORACH ##########################################


// int maxSubArray(vector<int>& nums)
// {
        
//     int maxi = INT_MIN; 

//     for (int i = 0; i < nums.size(); i++)
//     {
            
//         int sum = 0; 
            
//         for (int j = i; j < nums.size(); j++) 
//         {   
//             sum += nums[j];

//             maxi = max(maxi, sum);
//         }
//     }
//     return maxi;
// }

// int main() {
//     vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int maxSum = maxSubArray(arr);
    
//     cout << "The maximum subarray sum is: " << maxSum << endl;
// }


// ########################################## OPTIMAL APPORACH ##########################################


// int maxSubArray(vector<int>& nums) {
        
//         // maximum sum
//         long long maxi = LLONG_MIN; 
        
//         // current sum of subarray
//         long long sum = 0; 
        
//         // Iterate through the array
//         for (int i = 0; i < nums.size(); i++) {
            
//             // Add current element to the sum
//             sum += nums[i]; 
            
//             // Update maxi if current sum is greater
//             if (sum > maxi) {
//                 maxi = sum; 
//             }
            
//             // Reset sum to 0 if it becomes negative
//             if (sum < 0) {
//                 sum = 0; 
//             }
//         }
        
//         // Return the maximum subarray sum found
//         return maxi;
//     }


// int main() {
//     vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int maxSum = maxSubArray(arr);
    
//     cout << "The maximum subarray sum is: " << maxSum << endl;
// }



// ########################################## OPTIMAL APPORACH ##########################################
// ########################################## PRINT THE SUBARRAY ##########################################


int maxSubArray(vector<int>& nums)
{
        
    long long maxi = LLONG_MIN; 
        
    long long sum = 0;
        
    int start = 0; 
        
    int ansStart = -1, ansEnd = -1; 
        
    for (int i = 0; i < nums.size(); i++)
    {
            
        if (sum == 0) 
        {
            start = i;
        }
            
        sum += nums[i]; 
            
        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
            
        if (sum < 0)
        {
            sum = 0;
        }
    }
        
    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++) 
    {
        cout << nums[i] << " ";
    }
    cout << "]" << endl;
        
    return maxi;
}

int main() {
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

    int maxSum = maxSubArray(arr);
    cout << "The maximum subarray sum is: " << maxSum << endl;

    return 0;
}