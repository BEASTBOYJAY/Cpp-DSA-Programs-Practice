#include<bits/stdc++.h>
using namespace std;


// Function to find all combinations of numbers that sum up to the target
void findCombination(int ind, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds) 
{
    // Base case: if we have considered all elements in the array
    if (ind == arr.size())
    {
        // If the target is zero, we have found a valid combination
        if (target == 0) 
        {
            ans.push_back(ds);  // Add the current combination to the result
        }
        return;
    }

    // Recursive case: pick the element if it's less than or equal to the target
    if (arr[ind] <= target)
    {
        ds.push_back(arr[ind]);  // Add the current element to the combination
        findCombination(ind, target - arr[ind], arr, ans, ds);  // Continue with the same index to allow repeated elements
        ds.pop_back();  // Backtrack by removing the last added element
    }

    // Skip the current element and move to the next index
        findCombination(ind + 1, target, arr, ans, ds);
}


// Main function to get all combinations
vector<vector<int>> combinationSum(vector<int>& candidates, int target)
{
    vector<vector<int>> ans;  // To store the result
    vector<int> ds;  // To store a current combination
    findCombination(0, target, candidates, ans, ds);  // Start the recursive search
    return ans;  // Return all valid combinations
}


int main() {
    vector<int> v {2, 3, 6, 7};  // Candidate numbers
    int target = 7;  // Target sum

    // Get all combinations
    vector<vector<int>> ans = combinationSum(v, target);

    // Output the combinations
    cout << "Combinations are: " << endl;
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";  // Print each element of the combination
        }
        cout << endl;  // Print a newline after each combination
    }

    return 0;
}
