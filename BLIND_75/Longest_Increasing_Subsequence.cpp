#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /* Function to find the longest increasing 
    subsequence in the given array */
    int LIS(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> temp;
        temp.push_back(nums[0]);
        
        // Iterate on the elements of the array
        for(int i=1; i < n; i++) {
            
            // If the current element can be added to the subsequence
            if(nums[i] > temp.back()) 
                temp.push_back(nums[i]); 
                
            // Otherwise
            else {
                // Index at which the current element must be placed
                int ind = lower_bound(temp.begin(), temp.end(), nums[i]) -
                          temp.begin();
                          
                // Place the current element in the subsequence
                temp[ind] = nums[i];
            }    
            
        }
        
        // Return the length of temporary subsequence created so far
        return temp.size();
    }    
};


int main() {
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    
    // Creating an object of Solution class
    Solution sol;
    int lengthOfLIS = sol.LIS(nums);
    
    cout << "The length of the LIS for the given array is: " << lengthOfLIS << endl;
    
    return 0;
}
