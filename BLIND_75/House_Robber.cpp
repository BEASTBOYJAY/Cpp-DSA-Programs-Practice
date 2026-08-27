#include <bits/stdc++.h>
using namespace std;

// Function to solve the linear house robber problem (no circular arrangement)
long long int solve(vector<int>& arr) {
    // Get the size of the array
    int n = arr.size();
    
    // If there's only one house, return its value
    if (n == 1) return arr[0];

    // prev stores the maximum sum till the previous index
    long long int prev = arr[0];

    // prev2 stores the maximum sum till the index before previous
    long long int prev2 = 0;

    // Loop through houses starting from index 1
    for (int i = 1; i < n; i++) {
        // Option 1: Pick the current house and add the value from prev2
        long long int pick = arr[i];
        if (i > 1) pick += prev2;

        // Option 2: Skip the current house, take prev
        long long int nonPick = prev;

        // Choose the maximum of pick and nonPick
        long long int cur_i = max(pick, nonPick);

        // Update prev2 and prev for the next iteration
        prev2 = prev;
        prev = cur_i;
    }
    // prev will contain the maximum loot possible
    return prev;
}

// Function to solve the circular house robber problem
long long int robStreet(int n, vector<int> &arr) {
    // If there are no houses, return 0
    if (n == 0) return 0;

    // If there is only one house, return its value
    if (n == 1) return arr[0];

    // Create two arrays:
    // arr1 excludes the first house
    // arr2 excludes the last house
    vector<int> arr1, arr2;
    for (int i = 0; i < n; i++) {
        if (i != 0) arr1.push_back(arr[i]);
        if (i != n - 1) arr2.push_back(arr[i]);
    }

    // Compute maximum loot for both cases and return the maximum
    long long int ans1 = solve(arr1);
    long long int ans2 = solve(arr2);
    return max(ans1, ans2);
}

// Driver code
int main() {
    // Example input
    vector<int> arr{1, 5, 1, 2, 6};
    int n = arr.size();

    // Output the maximum loot possible
    cout << robStreet(n, arr);
    return 0;
}
