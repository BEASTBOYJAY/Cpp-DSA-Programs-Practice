#include <iostream>
using namespace std;
#include <vector>

// ########################################################################
// ################ PROBLEM: Program for Binary Search ####################
// ########################################################################

// ############################ ITERATIVE APPROACH ###################################

// int binarySearch(vector<int> &nums, int target)
// {
//     int n = nums.size();
//     int low = 0, high = n - 1;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (nums[mid] == target)
//             return mid;
//         else if (target > nums[mid])
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return -1;
// }

// Time Complexity: O(logN)

// ############################ RECURSIVE APPROACH ###################################

// int binarySearch(vector<int> &nums, int low, int high, int target)
// {
//     if (low > high)
//         return -1;

//     int mid = (low + high) / 2;

//     if (nums[mid] == target)
//         return mid;
//     else if (target > nums[mid])
//         return binarySearch(nums, mid + 1, high, target);
//     return binarySearch(nums, low, mid - 1, target);
// }

// Time Complexity: O(logN)

// ####################################################################
// ################ PROBLEM: Implement Lower Bound ####################
// ####################################################################

// ############################ BRUTE FORCE ###################################

// int lowerBound(vector<int> arr, int n, int x)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] >= x)
//         {
//             return i;
//         }
//     }
//     return n;
// }

// Time Complexity: O(N)

// ############################ OPTIMAL APPROACH ###################################

// int lowerBound(vector<int> arr, int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     int ans = n;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         if (arr[mid] >= x)
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// Time Complexity: O(logn)

// ####################################################################
// ################ PROBLEM: Implement Upper Bound ####################
// ####################################################################

// ############################ BRUTE FORCE ###################################

// int upperBound(vector<int> &arr, int x, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > x)
//         {
//             return i;
//         }
//     }
//     return n;
// }

// Time Complexity: O(N)
// ############################ OPTIMAL APPROACH ###################################

// int upperBound(vector<int> &arr, int x, int n)
// {
//     int low = 0, high = n - 1;
//     int ans = n;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         if (arr[mid] > x)
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// Time Complexity: O(logn)

// #####################################################################
// ################ PROBLEM: Search Insert Position ####################
// #####################################################################

// ############################ ONLY APPRAOCH ###################################

// int searchInsert(const vector<int> &arr, int x)
// {
//     int n = arr.size();
//     int low = 0, high = n - 1;
//     int ans = n;

//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] >= x)
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }

//     return ans;
// }

// Time Complexity:O(logN)

// #############################################################################
// ################ PROBLEM: Floor and Ceil in Sorted Array ####################
// #############################################################################

// ############################ ONLY APPRAOCH ###################################

// int findFloor(int arr[], int n, int x)
// {
//     int low = 0, high = n - 1;
//     int ans = -1;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] <= x)
//         {
//             ans = arr[mid];
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return ans;
// }

// int findCeil(int arr[], int n, int x)
// {
//     int low = 0, high = n - 1;
//     int ans = -1;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] >= x)
//         {
//             ans = arr[mid];
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// pair<int, int> getFloorAndCeil(int arr[], int n, int x)
// {
//     int f = findFloor(arr, n, x);
//     int c = findCeil(arr, n, x);
//     return make_pair(f, c);
// }

// Time Complexity:O(logN)

// ################################################################################
// ################ PROBLEM: Last occurrence in a sorted array ####################
// ################################################################################

// ############################ BRUTE FORCE ###################################

// int solve(int n, int key, vector<int> &v)
// {
//     int res = -1;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (v[i] == key)
//         {
//             res = i;
//             break;
//         }
//     }
//     return res;
// }

// Time Complexity: O(N)

// ############################ OPTIMAL APPROACH ###################################

// int solve(int n, int key, vector<int> &v)
// {
//     int start = 0;
//     int end = n - 1;
//     int res = -1;

//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (v[mid] == key)
//         {
//             res = mid;
//             start = mid + 1;
//         }
//         else if (key < v[mid])
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return res;
// }

// Time Complexity: O(log N)