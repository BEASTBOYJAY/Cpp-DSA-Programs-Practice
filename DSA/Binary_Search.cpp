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

// ################################################################################
// ################ PROBLEM: Count Occurrences in Sorted Array ####################
// ################################################################################

// ############################ BRUTE FORCE ###################################

// int count(vector<int> &arr, int n, int x)
// {
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {

//         if (arr[i] == x)
//             cnt++;
//     }
//     return cnt;
// }

// Time Complexity: O(N)

// ############################ OPTIMAL APPROACH ###################################

// int firstOccurrence(vector<int> &arr, int n, int k)
// {
//     int low = 0, high = n - 1;
//     int first = -1;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == k)
//         {
//             first = mid;
//             high = mid - 1;
//         }
//         else if (arr[mid] < k)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return first;
// }

// int lastOccurrence(vector<int> &arr, int n, int k)
// {
//     int low = 0, high = n - 1;
//     int last = -1;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == k)
//         {
//             last = mid;
//             low = mid + 1;
//         }
//         else if (arr[mid] < k)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return last;
// }

// pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
// {
//     int first = firstOccurrence(arr, n, k);
//     if (first == -1)
//         return {-1, -1};
//     int last = lastOccurrence(arr, n, k);
//     return {first, last};
// }

// int count(vector<int> &arr, int n, int x)
// {
//     pair<int, int> ans = firstAndLastPosition(arr, n, x);
//     if (ans.first == -1)
//         return 0;
//     return (ans.second - ans.first + 1);
// }

// Time Complexity: O(2*logN)

// #######################################################################################
// ################ PROBLEM: Search Element in a Rotated Sorted Array ####################
// #######################################################################################

// ############################ BRUTE FORCE ###################################

// int search(vector<int> &nums, int target)
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

// Time Complexity: O(N)

// ############################ OPTIMAL APPROACH ###################################

// int search(vector<int> &nums, int target)
// {

//     int low = 0;
//     int high = nums.size() - 1;

//     while (low <= high)
//     {

//         int mid = (low + high) / 2;

//         if (nums[mid] == target)
//             return mid;

//         if (nums[low] <= nums[mid])
//         {

//             if (nums[low] <= target && target < nums[mid])
//             {
//                 high = mid - 1;
//             }
//             else
//             {
//                 low = mid + 1;
//             }
//         }

//         else
//         {

//             if (nums[mid] < target && target <= nums[high])
//             {
//                 low = mid + 1;
//             }
//             else
//             {
//                 high = mid - 1;
//             }
//         }
//     }

//     return -1;
// }

// Time Complexity: O(log N)

// ########################################################################################
// ################ PROBLEM: Search Element in Rotated Sorted Array II ####################
// ########################################################################################

// ############################ BRUTE FORCE ###################################

// bool searchInARotatedSortedArrayII(vector<int> &arr, int k)
// {
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == k)
//             return true;
//     }
//     return false;
// }

// Time Complexity: O(N)

// ############################ OPTIMAL APPROACH ###################################

// bool searchInARotatedSortedArrayII(vector<int> &arr, int k)
// {
//     int n = arr.size();
//     int low = 0, high = n - 1;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         if (arr[mid] == k)
//             return true;

//         if (arr[low] == arr[mid] && arr[mid] == arr[high])
//         {
//             low++;
//             high--;
//             continue;
//         }

//         if (arr[low] <= arr[mid])
//         {
//             if (arr[low] <= k && k <= arr[mid])
//             {
//                 high = mid - 1;
//             }
//             else
//             {
//                 low = mid + 1;
//             }
//         }
//         else
//         {

//             if (arr[mid] <= k && k <= arr[high])
//             {
//                 low = mid + 1;
//             }
//             else
//             {
//                 high = mid - 1;
//             }
//         }
//     }

//     return false;
// }

// Time Complexity: O(logN)

// ##############################################################################
// ################ PROBLEM: Minimum in Rotated Sorted Array ####################
// ##############################################################################

// ############################ BRUTE FORCE ###################################

// int findMin(vector<int> &nums)
// {

//     int minVal = INT_MAX;

//     for (int i = 0; i < nums.size(); i++)
//     {

//         minVal = min(minVal, nums[i]);
//     }

//     return minVal;
// }

// Time Complexity: O(N)

// ############################ OPTIMAL APPROACH ###################################

// int findMin(vector<int> &nums)
// {

//     int low = 0, high = nums.size() - 1;

//     while (low < high)
//     {

//         int mid = low + (high - low) / 2;

//         if (nums[mid] > nums[high])
//         {

//             low = mid + 1;
//         }
//         else
//         {

//             high = mid;
//         }
//     }

//     return nums[low];
// }

// Time Complexity: O(logn)

// #################################################################################################
// ################ PROBLEM: Find out how many times the array has been rotated ####################
// #################################################################################################

// ############################ BRUTE FORCE ###################################

// int findRotations(vector<int> &arr)
// {
//     int n = arr.size();

//     int minVal = arr[0];

//     int minIndex = 0;

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] < minVal)
//         {
//             minVal = arr[i];
//             minIndex = i;
//         }
//     }

//     return minIndex;
// }

// Time Complexity: O(n)

// ############################ BETTER APPROACH ###################################

// int findRotationCount(vector<int> &arr)
// {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             return i + 1;
//         }
//     }
//     return 0;
// }

// Time Complexity: O(n)

// ############################ OPTIMAL APPROACH ###################################

// int findRotations(vector<int> &arr)
// {
//     int low = 0;
//     int high = arr.size() - 1;

//     while (low < high)
//     {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] > arr[high])
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid;
//         }
//     }

//     return low;
// }

// Time Complexity: O(log n)

// ######################################################################################
// ################ PROBLEM: Search Single Element in a sorted array ####################
// ######################################################################################

// ############################ BRUTE FORCE 1 ###################################

// int singleNonDuplicate(vector<int> &arr)
// {
//     int n = arr.size();

//     if (n == 1)
//         return arr[0];

//     for (int i = 0; i < n; i++)
//     {

//         if (i == 0)
//         {
//             if (arr[i] != arr[i + 1])
//                 return arr[i];
//         }

//         else if (i == n - 1)
//         {
//             if (arr[i] != arr[i - 1])
//                 return arr[i];
//         }

//         else
//         {
//             if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
//                 return arr[i];
//         }
//     }

//     return -1;
// }

// Time Complexity: O(N)

// ############################ BRUTE FORCE 2 ###################################

// int singleNonDuplicate(vector<int> &arr)
// {
//     int n = arr.size();

//     int ans = 0;

//     for (int i = 0; i < n; i++)
//     {
//         ans = ans ^ arr[i];
//     }

//     return ans;
// }

// Time Complexity: O(N)

// ############################ OPTIMAL APPROACH ###################################

// int singleNonDuplicate(vector<int> &arr)
// {
//     int n = arr.size();

//     if (n == 1)
//         return arr[0];

//     if (arr[0] != arr[1])
//         return arr[0];

//     if (arr[n - 1] != arr[n - 2])
//         return arr[n - 1];

//     int low = 1, high = n - 2;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
//         {
//             return arr[mid];
//         }

//         if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) ||
//             (mid % 2 == 0 && arr[mid] == arr[mid + 1]))
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }

//     return -1;
// }

// Time Complexity: O(logN)

// ####################################################################
// ################ PROBLEM: Peak element in Array ####################
// ####################################################################

// ############################ BRUTE FORCE ###################################

// int findPeakElement(vector<int> &nums)
// {
//     int n = nums.size();

//     for (int i = 0; i < n; i++)
//     {
//         bool left = (i == 0) || (nums[i] >= nums[i - 1]);
//         bool right = (i == n - 1) || (nums[i] >= nums[i + 1]);

//         if (left && right)
//             return i;
//     }

//     return -1;
// }

// Time Complexity: O(N)

// ############################ OPTIMAL APPROACH ###################################

// int findPeakElement(vector<int> &nums)
// {
//     int low = 0, high = nums.size() - 1;

//     while (low < high)
//     {
//         int mid = (low + high) / 2;

//         if (nums[mid] > nums[mid + 1])
//         {
//             high = mid;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }

//     return low;
// }

// Time Complexity: O(log N)