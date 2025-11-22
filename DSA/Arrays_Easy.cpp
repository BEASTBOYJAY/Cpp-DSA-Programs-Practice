#include <iostream>
using namespace std;

// ##############################################################################
// ################ PROBLEM: Find the Largest element in an array ###############
// ##############################################################################

// ############################ BRUTE FORCE ###################################

// #include <vector>
// #include <algorithm>

// void Largest_Element(vector<int> &arr)
// {
//     sort(arr.begin(), arr.end());
//     cout << "Largest Element is: " << arr[arr.size() - 1];
// }
// Time Complexity: O(N*log(N))

// ############################ BETTER APPROACH ###################################

// void Largest_Element(int arr[], int n)
// {
//     int max_ele = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (max_ele < arr[i])
//         {
//             max_ele = arr[i];
//         }
//     }
//     cout << "Largest Element: " << max_ele;
// }
// Time Complexity: O(n)

// #####################################################################################################
// ################ PROBLEM: Find Second Smallest and Second Largest Element in an array ###############
// #####################################################################################################

// ############################ BRUTE FORCE ###################################
// this approach only works if there are no duplicates

// #include <algorithm>
// void SSLE(int arr[], int n)
// {
//     if (n == 0 || n == 1)
//         cout << -1 << " " << -1 << endl;
//     sort(arr, arr + n);

//     cout << "Second Largest Element: " << arr[n - 2] << endl;
//     cout << "Second Smallest Element: " << arr[1] << endl;
// }
// Time Complexity: O(NlogN), For sorting the array

// ############################ BETTER APPROACH ###################################

// #include <climits>
// void SSLE(int arr[], int n)
// {
//     int max_ele = INT_MIN, smax_ele = INT_MIN;
//     int min_ele = INT_MAX, smin_ele = INT_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         max_ele = max(max_ele, arr[i]);
//         min_ele = min(min_ele, arr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > smax_ele && arr[i] != max_ele)
//             smax_ele = arr[i];
//         if (arr[i] < smin_ele && arr[i] != min_ele)
//             smin_ele = arr[i];
//     }

//     cout << "Second Largest Element: " << smax_ele << endl;
//     cout << "Second Smallest Element: " << smin_ele << endl;
// }
// Time Complexity: O(2*N)

// ############################ OPTIMAL APPROACH ###################################
// #include <climits>
// int secondSmallest(int arr[], int n)
// {
//     if (n < 2)
//         return -1;
//     int small = INT_MAX;
//     int second_small = INT_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < small)
//         {
//             second_small = small;
//             small = arr[i];
//         }
//         else if (arr[i] < second_small && arr[i] != small)
//         {
//             second_small = arr[i];
//         }
//     }
//     return second_small;
// }
// int secondLargest(int arr[], int n)
// {
//     if (n < 2)
//         return -1;
//     int large = INT_MIN, second_large = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > large)
//         {
//             second_large = large;
//             large = arr[i];
//         }

//         else if (arr[i] > second_large && arr[i] != large)
//         {
//             second_large = arr[i];
//         }
//     }
//     return second_large;
// }

// void SSLE(int arr[], int n)
// {
//     cout << "Second Largest Element: " << secondLargest(arr, n) << endl;
//     cout << "Second Smallest Element: " << secondSmallest(arr, n) << endl;
// }

// Time Complexity: O(N), Single-pass solution, for each

// #####################################################################
// ################ PROBLEM: Check if an Array is Sorted ###############
// #####################################################################

// ############################ BRUTE FORCE ###################################
// bool isSorted(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//                 return false;
//         }
//     }

//     return true;
// }
// Time Complexity: O(N^2)

// ############################ OPTIMAL APPROACH ###################################

// bool isSorted(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] < arr[i - 1])
//             return false;
//     }

//     return true;
// }
// Time Complexity: O(N)

// ######################################################################################
// ################ PROBLEM: Remove Duplicates in-place from Sorted Array ###############
// ######################################################################################

// ############################ BRUTE FORCE ###################################

// #include <unordered_set>
// #include <vector>

// void removeDuplicates(vector<int> &nums)
// {
//     unordered_set<int> seen;
//     int index = 0;

//     for (int num : nums)
//     {
//         if (seen.find(num) == seen.end())
//         {
//             seen.insert(num);
//             nums[index] = num;
//             index++;
//         }
//     }

//     cout << "Array after removing duplicates: ";
//     for (int i = 0; i < index; i++)
//     {
//         cout << nums[i] << " ";
//     }
// }

// Time Complexity: O(N)

// ############################ OPTIMAL APPROACH ###################################

// #include <vector>
// void removeDuplicates(vector<int> &nums)
// {

//     int index = 0;

//     for (int j = 1; j < nums.size(); j++)
//     {
//         if (nums[j] != nums[index])
//         {
//             index++;
//             nums[index] = nums[j];
//         }
//     }

//     for (int i = 0; i < index + 1; i++)
//     {
//         cout << nums[i] << " ";
//     }
// }
// Time Complexity: O(N)

// int main()
// {
//     vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
//     removeDuplicates(nums);
// }

// ######################################################################################
// ################ PROBLEM: Left Rotate the Array by One ###############################
// ######################################################################################

// ############################ BRUTE FORCE ###################################

// void solve(int arr[], int n)
// {
//     int temp[n];
//     for (int i = 1; i < n; i++)
//     {
//         temp[i - 1] = arr[i];
//     }
//     temp[n - 1] = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         cout << temp[i] << " ";
//     }
//     cout << endl;
// }

// Time Complexity: O(n)

// ############################ OPTIMAL APPROACH ###################################

// void solve(int arr[], int n)
// {
//     int temp = arr[0];
//     for (int i = 0; i < n - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     arr[n - 1] = temp;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// Time Complexity: O(n)

// ######################################################################################
// ################ PROBLEM: Rotate array by K elements #################################
// ######################################################################################

// ############################ BRUTE FORCE ###################################
// For Rotating the Elements to right

// void Rotatetoright(int arr[], int n, int k)
// {
//     if (n == 0)
//         return;
//     k = k % n;
//     if (k > n)
//         return;
//     int temp[k];
//     for (int i = n - k; i < n; i++)
//     {
//         temp[i - n + k] = arr[i];
//     }
//     for (int i = n - k - 1; i >= 0; i--)
//     {
//         arr[i + k] = arr[i];
//     }
//     for (int i = 0; i < k; i++)
//     {
//         arr[i] = temp[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// For Rotating the Elements to left

// void Rotatetoleft(int arr[], int n, int k)
// {
//     if (n == 0)
//         return;
//     k = k % n;
//     if (k > n)
//         return;
//     int temp[k];
//     for (int i = 0; i < k; i++)
//     {
//         temp[i] = arr[i];
//     }
//     for (int i = 0; i < n - k; i++)
//     {
//         arr[i] = arr[i + k];
//     }
//     for (int i = n - k; i < n; i++)
//     {
//         arr[i] = temp[i - n + k];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// Time Complexity: O(n)

// ############################ OPTIMAL APPROACH ###################################
// For Rotating Elements to right

// void Reverse(int arr[], int start, int end)
// {
//     while (start <= end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// void Rotateeletoright(int arr[], int n, int k)
// {
//     // Reverse first n-k elements
//     Reverse(arr, 0, n - k - 1);
//     // Reverse last k elements
//     Reverse(arr, n - k, n - 1);
//     // Reverse whole array
//     Reverse(arr, 0, n - 1);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// For Rotating Elements to left

// void Reverse(int arr[], int start, int end)
// {
//     while (start <= end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// // Function to Rotate k elements to left
// void Rotateeletoleft(int arr[], int n, int k)
// {
//     // Reverse first k elements
//     Reverse(arr, 0, k - 1);
//     // Reverse last n-k elements
//     Reverse(arr, k, n - 1);
//     // Reverse whole array
//     Reverse(arr, 0, n - 1);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// Time Complexity - O(N)

// ##################################################################################################
// ################ PROBLEM: Move all Zeros to the end of the array #################################
// ##################################################################################################

// ############################ MY APPROACH ###################################

// void movezeros(int arr[], int n)
// {
//     int temp[n];

//     int j = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             temp[j] = arr[i];
//             j++;
//         }
//     }

//     for (int i = j; i < n; i++)
//     {
//         temp[i] = 0;
//     }

//     cout << "new array: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << temp[i] << " ";
//     }
// }
// Time Complexity: O(N)

// ############################ BRUTE FORCE ###################################

// #include <vector>

// vector<int> moveZeroes(vector<int> &arr)
// {
//     // Create temp array
//     vector<int> temp(arr.size(), 0);

//     // Pointer to fill temp
//     int index = 0;

//     // Traverse input array
//     for (int i = 0; i < arr.size(); i++)
//     {
//         // If non-zero, add to temp
//         if (arr[i] != 0)
//         {
//             temp[index] = arr[i];
//             index++;
//         }
//     }

//     // Copy back temp to original
//     for (int i = 0; i < arr.size(); i++)
//     {
//         arr[i] = temp[i];
//     }

//     // Return updated array
//     return arr;
// }
// int main()
// {
//     vector<int> arr = {0, 1, 0, 3, 12};
//     vector<int> result = moveZeroes(arr);

//     cout << "Array after moving zeroes: ";
//     for (int num : result)
//     {
//         cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }
// Time Complexity: O(N)

// ############################ OPTIMAL APPROACH ###################################

// #include <vector>
// #include <algorithm>
// void moveZeroes(vector<int> &nums)
// {
//     int j = -1;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == 0)
//         {
//             j = i;
//             break;
//         }
//     }

//     if (j == -1)
//         return;

//     for (int i = j + 1; i < nums.size(); i++)
//     {
//         if (nums[i] != 0)
//         {
//             swap(nums[i], nums[j]);
//             j++;
//         }
//     }
// }

// // Time Complexity: O(N)
// int main()
// {
//     vector<int> nums = {0, 1, 0, 3, 12};
//     moveZeroes(nums);

//     for (int num : nums)
//         cout << num << " ";
//     cout << endl;
//     return 0;
// }

// #########################################################################
// ################ PROBLEM: Linear Search #################################
// #########################################################################

// void linearsearch(int arr[], int tofind, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == tofind)
//         {
//             cout << "Number found in index: " << i;
//             break;
//         }
//     }
// }
// Time Complexity: O(n)

// #########################################################################
// ################ PROBLEM: Union of Two Sorted Arrays ####################
// #########################################################################

// ############################ 1st APPROACH ###################################

// #include <vector>
// #include <map>

// vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
// {
//     map<int, int> freq;
//     vector<int> Union;
//     for (int i = 0; i < n; i++)
//         freq[arr1[i]]++;
//     for (int i = 0; i < m; i++)
//         freq[arr2[i]]++;
//     for (auto &it : freq)
//         Union.push_back(it.first);
//     return Union;
// }

// // Time Compleixty : O( (m+n)log(m+n) )
// // Space Complexity : O(m+n) {If Space of Union ArrayList is considered}
// // O(1) {If Space of union ArrayList is not considered}
// int main()
// {
//     int n = 10, m = 7;
//     int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int arr2[] = {2, 3, 4, 4, 5, 11, 12};
//     vector<int> Union = FindUnion(arr1, arr2, n, m);
//     cout << "Union of arr1 and arr2 is " << endl;
//     for (auto &val : Union)
//         cout << val << " ";
//     return 0;
// }

// ############################ 2nd APPROACH ###################################

// #include <vector>
// #include <set>

// vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
// {
//     set<int> s;
//     vector<int> Union;
//     for (int i = 0; i < n; i++)
//         s.insert(arr1[i]);
//     for (int i = 0; i < m; i++)
//         s.insert(arr2[i]);
//     for (auto &it : s)
//         Union.push_back(it);
//     return Union;
// }

// // Time Compleixty : O( (m+n)log(m+n) )
// // Space Complexity : O(m+n) {If Space of Union ArrayList is considered}
// // O(1) {If Space of union ArrayList is not considered}
// int main()

// {
//     int n = 10, m = 7;
//     int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int arr2[] = {2, 3, 4, 4, 5, 11, 12};
//     vector<int> Union = FindUnion(arr1, arr2, n, m);
//     cout << "Union of arr1 and arr2 is  " << endl;
//     for (auto &val : Union)
//         cout << val << " ";
//     return 0;
// }

// ############################ 3rd APPROACH ###################################
// #include <vector>

// vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
// {
//     int i = 0, j = 0;  // pointers
//     vector<int> Union; // Uninon vector
//     while (i < n && j < m)
//     {
//         if (arr1[i] <= arr2[j]) // Case 1 and 2
//         {
//             if (Union.size() == 0 || Union.back() != arr1[i])
//                 Union.push_back(arr1[i]);
//             i++;
//         }
//         else // case 3
//         {
//             if (Union.size() == 0 || Union.back() != arr2[j])
//                 Union.push_back(arr2[j]);
//             j++;
//         }
//     }
//     while (i < n) // IF any element left in arr1
//     {
//         if (Union.back() != arr1[i])
//             Union.push_back(arr1[i]);
//         i++;
//     }
//     while (j < m) // If any elements left in arr2
//     {
//         if (Union.back() != arr2[j])
//             Union.push_back(arr2[j]);
//         j++;
//     }
//     return Union;
// }
// // Time Complexity: O(m+n)
// // Space Complexity : O(m+n) {If Space of Union ArrayList is considered}
// // O(1) {If Space of union ArrayList is not considered}

// int main()

// {
//     int n = 10, m = 7;
//     int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int arr2[] = {2, 3, 4, 4, 5, 11, 12};
//     vector<int> Union = FindUnion(arr1, arr2, n, m);
//     cout << "Union of arr1 and arr2 is  " << endl;
//     for (auto &val : Union)
//         cout << val << " ";
//     return 0;
// }

// ##################################################################################
// ################ PROBLEM: Find the missing number in an array ####################
// ##################################################################################

// ############################ BRUTE FORCE ###################################

// #include <vector>

// int missingNumber(vector<int> &a, int N)
// {
//     for (int i = 1; i <= N; i++)
//     {
//         int flag = 0;

//         for (int j = 0; j < N - 1; j++)
//         {
//             if (a[j] == i)
//             {
//                 flag = 1;
//                 break;
//             }
//         }

//         if (flag == 0)
//             return i;
//     }

//     return -1;
// }

// Time Complexity: O(N*N)

// ############################ 1st OPTIMAL APPROACH ###################################

// int missingNumber(vector<int> &a, int N)
// {
//     int sum = (N * (N + 1)) / 2;

//     int s2 = 0;
//     for (int i = 0; i < N - 1; i++)
//     {
//         s2 += a[i];
//     }

//     return sum - s2;
// }
// Time Complexity: O(N)

// ############################ 2nd OPTIMAL APPROACH ###################################

// int missingNumber(vector<int> &a, int N)
// {
//     int xor1 = 0, xor2 = 0;

//     // XOR all the array elements and numbers from 1 to N-1
//     for (int i = 0; i < N - 1; i++)
//     {
//         xor2 = xor2 ^ a[i];    // XOR of array elements
//         xor1 = xor1 ^ (i + 1); // XOR of numbers from 1 to N-1
//     }

//     xor1 = xor1 ^ N; // Include N in the XOR

//     // XOR of xor1 and xor2 gives the missing number
//     return xor1 ^ xor2;
// }
// Time Complexity: O(N)

// #######################################################################################
// ################ PROBLEM: Count Maximum Consecutive One's in the array ################
// #######################################################################################

// int findMaxConsecutiveOnes(vector<int> &nums)
// {
//     int cnt = 0;
//     int maxi = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == 1)
//         {
//             cnt++;
//         }
//         else
//         {
//             cnt = 0;
//         }

//         maxi = max(maxi, cnt);
//     }
//     return maxi;
// }

// #########################################################################################################
// ################ PROBLEM: Find the number that appears once, and the other numbers twice ################
// #########################################################################################################

// ############################ BRUTE FORCE ###################################

#include <vector>

// int getSingleElement(vector<int> &arr)
// {
//     int n = arr.size();

//     for (int i = 0; i < n; i++)
//     {
//         int num = arr[i];
//         int cnt = 0;

//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] == num)
//                 cnt++;
//         }

//         if (cnt == 1)
//             return num;
//     }

//     return -1;
// }
// Time Complexity: O(N*N)

// ############################ BETTER APPROACH ###################################

// int getSingleElement(vector<int> &arr)
// {
//     int n = arr.size();

//     int maxi = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         maxi = max(maxi, arr[i]);
//     }

//     vector<int> hash(maxi + 1, 0);

//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]]++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (hash[arr[i]] == 1)
//             return arr[i];
//     }

//     return -1;
// }
// Time Complexity: O(N)+O(N)+O(N)

// ############################ OPTIMAL APPROACH ###################################

// int getSingleElement(vector<int> &arr)
// {
//     int n = arr.size();
//     int xorr = 0;

//     for (int i = 0; i < n; i++)
//     {
//         xorr = xorr ^ arr[i];
//     }

//     return xorr;
// }
// Time Complexity: O(N)

// #######################################################################################
// ################ PROBLEM: Longest Subarray with given Sum K(Positives) ################
// #######################################################################################

// ############################ 1st APPROACH ###################################

// int getLongestSubarray(vector<int> &a, long long k)
// {
//     int n = a.size(); // size of the array.

//     int len = 0;
//     for (int i = 0; i < n; i++)
//     { // starting index
//         for (int j = i; j < n; j++)
//         { // ending index
//             // add all the elements of
//             // subarray = a[i...j]:
//             long long s = 0;
//             for (int K = i; K <= j; K++)
//             {
//                 s += a[K];
//             }

//             if (s == k)
//                 len = max(len, j - i + 1);
//         }
//     }
//     return len;
// }
// Time Complexity: O(N^3)

// ############################ 2nd APPROACH ###################################

// int getLongestSubarray(vector<int> &a, long long k)
// {
//     int n = a.size(); // size of the array.

//     int len = 0;
//     for (int i = 0; i < n; i++)
//     {                    // starting index
//         long long s = 0; // Sum variable
//         for (int j = i; j < n; j++)
//         { // ending index
//             // add the current element to
//             // the subarray a[i...j-1]:
//             s += a[j];

//             if (s == k)
//                 len = max(len, j - i + 1);
//         }
//     }
//     return len;
// }
// Time Complexity: O(N2)

// ############################ 3rd APPROACH ###################################

// #include <map>
// int getLongestSubarray(vector<int> &a, long long k)
// {
//     int n = a.size(); // size of the array.

//     map<long long, int> preSumMap;
//     long long sum = 0;
//     int maxLen = 0;
//     for (int i = 0; i < n; i++)
//     {
//         // calculate the prefix sum till index i:
//         sum += a[i];

//         // if the sum = k, update the maxLen:
//         if (sum == k)
//         {
//             maxLen = max(maxLen, i + 1);
//         }

//         // calculate the sum of remaining part i.e. x-k:
//         long long rem = sum - k;

//         // Calculate the length and update maxLen:
//         if (preSumMap.find(rem) != preSumMap.end())
//         {
//             int len = i - preSumMap[rem];
//             maxLen = max(maxLen, len);
//         }

//         // Finally, update the map checking the conditions:
//         if (preSumMap.find(sum) == preSumMap.end())
//         {
//             preSumMap[sum] = i;
//         }
//     }

//     return maxLen;
// }
// Time Complexity: O(N) or O(N*logN)

// ############################ 4th APPROACH ###################################

// int getLongestSubarray(vector<int> &a, long long k)
// {
//     int n = a.size(); // size of the array.

//     int left = 0, right = 0; // 2 pointers
//     long long sum = a[0];
//     int maxLen = 0;
//     while (right < n)
//     {
//         // if sum > k, reduce the subarray from left
//         // until sum becomes less or equal to k:
//         while (left <= right && sum > k)
//         {
//             sum -= a[left];
//             left++;
//         }

//         // if sum = k, update the maxLen i.e. answer:
//         if (sum == k)
//         {
//             maxLen = max(maxLen, right - left + 1);
//         }

//         // Move forward thw right pointer:
//         right++;
//         if (right < n)
//             sum += a[right];
//     }

//     return maxLen;
// }
// Time Complexity: O(2*N)

// #################################################################################################
// ################ PROBLEM: Longest Subarray with sum K | [Postives and Negatives] ################
// #################################################################################################

// ############################ BRUTE FORCE ###################################

// int getLongestSubarray(vector<int> &a, int k)
// {
//     int n = a.size(); // Get the size of the input array
//     int len = 0;      // Variable to store the maximum length found

//     // Loop to choose the starting index of the subarray
//     for (int i = 0; i < n; i++)
//     {
//         // Loop to choose the ending index of the subarray
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0; // Store sum of current subarray

//             // Loop to calculate the sum of the subarray from i to j
//             for (int idx = i; idx <= j; idx++)
//             {
//                 sum += a[idx];
//             }

//             // If subarray sum matches target, update maximum length
//             if (sum == k)
//             {
//                 len = max(len, j - i + 1);
//             }
//         }
//     }
//     return len; // Return the longest length found
// }

// Time Complexity: O(N^3)

// ############################ BETTER APPROACH ###################################

// int getLongestSubarray(vector<int> &a, int k)
// {
//     int n = a.size(); // Total number of elements
//     int len = 0;      // Variable to store the max length found

//     // Outer loop: pick every possible starting index
//     for (int i = 0; i < n; i++)
//     {
//         int s = 0; // Reset sum for each new starting index

//         // Inner loop: extend the subarray from the current start
//         for (int j = i; j < n; j++)
//         {
//             s += a[j]; // Add current element to the ongoing sum

//             // If current sum equals target, update the max length
//             if (s == k)
//             {
//                 len = max(len, j - i + 1);
//             }
//         }
//     }
//     return len; // Return the maximum length found
// }
// Time Complexity: O(N2)

// ############################ OPTIMAL APPROACH ###################################
// #include <map>
// int getLongestSubarray(vector<int> &a, int k)
// {
//     int n = a.size();
//     map<int, int> preSumMap; // prefixSum -> earliest index
//     int sum = 0;
//     int maxLen = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i]; // compute running prefix sum

//         // Case 1: If the entire sum from 0 to i is equal to k
//         if (sum == k)
//         {
//             maxLen = max(maxLen, i + 1);
//         }

//         // Case 2: If (sum - k) is seen before, a valid subarray exists
//         int rem = sum - k;
//         if (preSumMap.find(rem) != preSumMap.end())
//         {
//             int len = i - preSumMap[rem];
//             maxLen = max(maxLen, len);
//         }

//         // Only store the first occurrence of each prefix sum
//         if (preSumMap.find(sum) == preSumMap.end())
//         {
//             preSumMap[sum] = i;
//         }
//     }

//     return maxLen;
// }
// Time Complexity: O(N) or O(N*logN)