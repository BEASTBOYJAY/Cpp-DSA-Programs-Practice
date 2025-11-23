#include <iostream>
#include <vector>
using namespace std;

// ###################################################################################################
// ################ PROBLEM: Two Sum : Check if a pair with given sum exists in Array ################
// ###################################################################################################

// ############################ BRUTE FORCE ###################################

// void find2sum(int arr[], int n, int k)
// {
//     bool found = false;
//     int index_i;
//     int index_j;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] + arr[j] == k)
//             {
//                 found = true;
//                 index_i = i;
//                 index_j = j;
//             }
//         }
//     }
//     cout << "found: " << found << endl;
//     cout << "indexes: " << index_i << " " << index_j << endl;
// }

// Time Complexity: O(N2)

// ############################ BETTER APPROACH ###################################
// #include <unordered_map>

// void find2sum(int arr[], int n, int k)
// {
//     unordered_map<int, int> mpp;
//     bool found = false;
//     int index_i;
//     int index_j;
//     for (int i = 0; i < n; i++)
//     {
//         int num = arr[i];
//         int moreNeeded = k - num;
//         if (mpp.find(moreNeeded) != mpp.end())
//         {
//             found = true;
//             index_i = i;
//             index_j = mpp[moreNeeded];
//         }
//         mpp[num] = i;
//     }
//     cout << "found: " << found << endl;
//     cout << "indexes: " << index_i << " " << index_j << endl;
// }
// Time Complexity: O(N)

// ############################ OPTIMAL APPROACH ###################################

// #include <algorithm>
// void find2sum(int arr[], int n, int k)
// {
//     sort(arr, arr + n);
//     int left = 0, right = n - 1;
//     bool found = false;
//     while (left < right)
//     {
//         int sum = arr[left] + arr[right];
//         if (sum == k)
//         {
//             found = true;
//             break;
//         }
//         else if (sum < k)
//             left++;
//         else
//             right--;
//     }
//     cout << "found: " << found << endl;
//     cout << "indexes: " << left << " " << right << endl;
// }
// Time Complexity: O(N) + O(N*logN)

// ###################################################################################
// ################ PROBLEM: Two Sum : Sort an array of 0s, 1s and 2s ################
// ###################################################################################

// ############################ BRUTE FORCE ###################################
// using normal sorting.
// Time Complexity: O(N*logN)

// ############################ BETTER APPROACH ###################################
// #include <vector>

// void sortArray(vector<int> &arr, int n)
// {

//     int cnt0 = 0, cnt1 = 0, cnt2 = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//             cnt0++;
//         else if (arr[i] == 1)
//             cnt1++;
//         else
//             cnt2++;
//     }

//     // Replace the places in the original array:
//     for (int i = 0; i < cnt0; i++)
//         arr[i] = 0;

//     for (int i = cnt0; i < cnt0 + cnt1; i++)
//         arr[i] = 1;

//     for (int i = cnt0 + cnt1; i < n; i++)
//         arr[i] = 2;
// }
// Time Complexity: O(N) + O(N)

// ############################ OPTIMAL APPROACH ###################################
// #include <vector>

// void sortArray(vector<int> &arr, int n)
// {

//     int low = 0, mid = 0, high = n - 1; // 3 pointers

//     while (mid <= high)
//     {
//         if (arr[mid] == 0)
//         {
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }
//         else if (arr[mid] == 1)
//         {
//             mid++;
//         }
//         else
//         {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }
// Time Complexity: O(N)

// ####################################################################################################
// ################ PROBLEM: Find the Majority Element that occurs more than N/2 times ################
// ####################################################################################################

// ############################ BRUTE FORCE ###################################
// #include <vector>

// int majorityElement(vector<int> v)
// {

//     int n = v.size();

//     for (int i = 0; i < n; i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (v[j] == v[i])
//             {
//                 cnt++;
//             }
//         }

//         if (cnt > (n / 2))
//             return v[i];
//     }

//     return -1;
// }
// Time Complexity: O(N^2)

// ############################ BETTER APPROACH ###################################

// #include <map>
// int majorityElement(vector<int> v)
// {
//     int n = v.size();
//     map<int, int> mpp;

//     for (int i = 0; i < n; i++)
//     {
//         mpp[v[i]]++;
//     }

//     for (auto it : mpp)
//     {
//         if (it.second > (n / 2))
//         {
//             return it.first;
//         }
//     }

//     return -1;
// }
// Time Complexity: O(N*logN) + O(N)

// ############################ OPTIMAL APPROACH ###################################

// int majorityElement(vector<int> v)
// {

//     int n = v.size();
//     int cnt = 0;
//     int el;

//     for (int i = 0; i < n; i++)
//     {
//         if (cnt == 0)
//         {
//             cnt = 1;
//             el = v[i];
//         }
//         else if (el == v[i])
//             cnt++;
//         else
//             cnt--;
//     }

//     int cnt1 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] == el)
//             cnt1++;
//     }

//     if (cnt1 > (n / 2))
//         return el;
//     return -1;
// }
// Time Complexity: O(N) + O(N)

// ####################################################################################################
// ################ PROBLEM: Kadane's Algorithm : Maximum Subarray Sum in an Array ####################
// ####################################################################################################

// ############################ BRUTE FORCE ###################################
// #include <climits>
// int maxSubarraySum(int arr[], int n)
// {
//     int maxi = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;

//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }

//             maxi = max(maxi, sum);
//         }
//     }

//     return maxi;
// }
// Time Complexity: O(N3)

// ############################ BETTER APPROACH ###################################

// int maxSubarraySum(int arr[], int n)
// {
//     int maxi = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {

//             sum += arr[j];

//             maxi = max(maxi, sum);
//         }
//     }

//     return maxi;
// }
// Time Complexity: O(N2)

// ############################ OPTIMAL APPROACH ###################################

// long long maxSubarraySum(int arr[], int n)
// {
//     long long maxi = LONG_MIN;
//     long long sum = 0;

//     for (int i = 0; i < n; i++)
//     {

//         sum += arr[i];

//         if (sum > maxi)
//         {
//             maxi = sum;
//         }

//         if (sum < 0)
//         {
//             sum = 0;
//         }
//     }

//     return maxi;
// }
// Time Complexity: O(N)

// ############################ FOLLOWUP QUESTION ###################################
// long long maxSubarraySum(int arr[], int n)
// {
//     long long maxi = LONG_MIN; // maximum sum
//     long long sum = 0;

//     int start = 0;
//     int ansStart = -1, ansEnd = -1;
//     for (int i = 0; i < n; i++)
//     {

//         if (sum == 0)
//             start = i;
//         sum += arr[i];

//         if (sum > maxi)
//         {
//             maxi = sum;

//             ansStart = start;
//             ansEnd = i;
//         }

//         if (sum < 0)
//         {
//             sum = 0;
//         }
//     }

//     cout << "The subarray is: [";
//     for (int i = ansStart; i <= ansEnd; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "]n";
//     return maxi;
// }
// Time Complexity: O(N)
