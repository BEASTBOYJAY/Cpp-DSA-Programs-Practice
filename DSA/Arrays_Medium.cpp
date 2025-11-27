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

// #################################################################
// ################ PROBLEM: Stock Buy And Sell ####################
// #################################################################

// ############################ BRUTE FORCE ###################################

// int maxProfit(vector<int> &arr)
// {
//     int maxPro = 0;
//     int n = arr.size();

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 maxPro = max(arr[j] - arr[i], maxPro);
//             }
//         }
//     }

//     return maxPro;
// }
// Time complexity: O(n^2)

// ############################ OPTIMAL APPROACH ###################################

// int maxProfit(vector<int> &arr)
// {
//     int maxPro = 0;
//     int n = arr.size();
//     int minPrice = INT_MAX;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         minPrice = min(minPrice, arr[i]);
//         maxPro = max(maxPro, arr[i] - minPrice);
//     }

//     return maxPro;
// }

// ###############################################################################
// ################ PROBLEM: Rearrange Array Elements by Sign ####################
// ###############################################################################

// ############################ BRUTE FORCE ###################################

// vector<int> RearrangeBySign(vector<int> &A, int n)
// {
//     vector<int> pos;
//     vector<int> neg;

//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] > 0)
//             pos.push_back(A[i]);
//         else
//             neg.push_back(A[i]);
//     }

//     for (int i = 0; i < n / 2; i++)
//     {
//         A[2 * i] = pos[i];
//         A[2 * i + 1] = neg[i];
//     }

//     return A;
// }
// Time Complexity: O(N+N/2)

// ############################ OPTIMAL APPROACH ###################################

// vector<int> rearrangeBySign(vector<int> &A)
// {
//     int n = A.size();

//     vector<int> ans(n, 0);

//     int posIndex = 0, negIndex = 1;

//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] < 0)
//         {
//             ans[negIndex] = A[i];
//             negIndex += 2;
//         }
//         else
//         {

//             ans[posIndex] = A[i];
//             posIndex += 2;
//         }
//     }

//     return ans;
// }
// Time Complexity: O(N)

// #################################################################################################################
// ################ PROBLEM: next_permutation : find next lexicographically greater permutation ####################
// #################################################################################################################

// ############################ BRUTE FORCE ###################################

// #include <algorithm>
// vector<int> nextPermutation(vector<int> &nums)
// {
//     vector<vector<int>> all;

//     sort(nums.begin(), nums.end());
//     do
//     {
//         all.push_back(nums);
//     } while (next_permutation(nums.begin(), nums.end()));

//     for (int i = 0; i < all.size(); i++)
//     {
//         if (all[i] == nums)
//         {
//             if (i == all.size() - 1)
//                 return all[0];
//             return all[i + 1];
//         }
//     }

//     return nums;
// }
// Time Complexity: O(N!*N)

// ############################ OPTIMAL APPROACH ###################################

// void nextPermutation(vector<int> &nums)
// {
//     int index = -1;

//     for (int i = nums.size() - 2; i >= 0; i--)
//     {
//         if (nums[i] < nums[i + 1])
//         {
//             index = i;
//             break;
//         }
//     }

//     if (index == -1)
//     {
//         reverse(nums.begin(), nums.end());
//         return;
//     }

//     for (int i = nums.size() - 1; i > index; i--)
//     {
//         if (nums[i] > nums[index])
//         {
//             swap(nums[i], nums[index]);
//             break;
//         }
//     }

//     reverse(nums.begin() + index + 1, nums.end());
// }
// Time Complexity: O(N)

// ##################################################################
// ################ PROBLEM: Leaders in an Array ####################
// ##################################################################

// ############################ BRUTE FORCE ###################################

// vector<int> leaders(vector<int> &nums)
// {
//     vector<int> ans;

//     // Iterate through each element in nums
//     for (int i = 0; i < nums.size(); i++)
//     {
//         bool leader = true;

//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[j] >= nums[i])
//             {
//                 leader = false;
//                 break;
//             }
//         }

//         if (leader)
//         {
//             ans.push_back(nums[i]);
//         }
//     }

//     return ans;
// }

// Time Complexity: O(N2)

// ############################ OPTIMAL APPROACH ###################################

// #include <algorithm>
// vector<int> leaders(vector<int> &nums)
// {
//     vector<int> ans;

//     if (nums.empty())
//     {
//         return ans;
//     }

//     int max = nums[nums.size() - 1];
//     ans.push_back(nums[nums.size() - 1]);

//     for (int i = nums.size() - 2; i >= 0; i--)
//     {
//         if (nums[i] > max)
//         {
//             ans.push_back(nums[i]);
//             max = nums[i];
//         }
//     }

//     reverse(ans.begin(), ans.end());

//     return ans;
// }
// Time Complexity: O(N)

// #######################################################################################
// ################ PROBLEM: Longest Consecutive Sequence in an Array ####################
// #######################################################################################

// ############################ BRUTE FORCE ###################################

// class Solution
// {
// private:
//     // Helper function to perform linear search
//     bool linearSearch(vector<int> &a, int num)
//     {
//         int n = a.size();
//         // Traverse through the array
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == num)
//                 return true;
//         }
//         return false;
//     }

// public:
//     int longestConsecutive(vector<int> &nums)
//     {
//         if (nums.size() == 0)
//         {
//             return 0;
//         }
//         int n = nums.size();
//         int longest = 1;

//         for (int i = 0; i < n; i++)
//         {
//             int x = nums[i];
//             int cnt = 1;

//             while (linearSearch(nums, x + 1) == true)
//             {
//                 x += 1;
//                 cnt += 1;
//             }

//             longest = max(longest, cnt);
//         }
//         return longest;
//     }
// };
// Time Complexity: O(n2),

// ############################ BETTER APPROACH ###################################

// #include <algorithm>

// int longestConsecutive(vector<int> &nums)
// {
//     int n = nums.size();

//     if (n == 0)
//         return 0;

//     sort(nums.begin(), nums.end());

//     int lastSmaller = INT_MIN;
//     int cnt = 0;
//     int longest = 1;

//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] - 1 == lastSmaller)
//         {
//             cnt += 1;
//             lastSmaller = nums[i];
//         }
//         else if (nums[i] != lastSmaller)
//         {
//             cnt = 1;
//             lastSmaller = nums[i];
//         }
//         longest = max(longest, cnt);
//     }
//     return longest;
// }
// Time Complexity: O(n log n)

// ############################ OPTIMAL APPROACH ###################################

// #include <unordered_set>
// int longestConsecutive(vector<int> &a)
// {
//     int n = a.size();
//     if (n == 0)
//         return 0;

//     int longest = 1;
//     unordered_set<int> st;

//     for (int i = 0; i < n; i++)
//     {
//         st.insert(a[i]);
//     }

//     for (auto it : st)
//     {
//         if (st.find(it - 1) == st.end())
//         {
//             int cnt = 1;
//             int x = it;

//             while (st.find(x + 1) != st.end())
//             {
//                 x = x + 1;
//                 cnt = cnt + 1;
//             }
//             longest = max(longest, cnt);
//         }
//     }
//     return longest;
// }

// Time Complexity: O(n)

// #######################################################################################
// ################ PROBLEM: Longest Consecutive Sequence in an Array ####################
// #######################################################################################

// ############################ BRUTE FORCE ###################################

// void setZeroes(vector<vector<int>> &matrix)
// {
//     int m = matrix.size();
//     int n = matrix[0].size();

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (matrix[i][j] == 0)
//             {

//                 for (int col = 0; col < n; col++)
//                 {
//                     if (matrix[i][col] != 0)
//                         matrix[i][col] = -1;
//                 }
//                 for (int row = 0; row < m; row++)
//                 {
//                     if (matrix[row][j] != 0)
//                         matrix[row][j] = -1;
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (matrix[i][j] == -1)
//                 matrix[i][j] = 0;
//         }
//     }
// }
// Time Complexity: O(m * n * (m + n))

// ############################ BETTER APPROACH ###################################

// void setZeroes(vector<vector<int>> &matrix)
// {
//     int m = matrix.size();
//     int n = matrix[0].size();

//     vector<int> row(m, 0);
//     vector<int> col(n, 0);

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (row[i] == 1 || col[j] == 1)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
// }
// Time Complexity: O(m × n)

//  ############################ OPTIMAL APPROACH ###################################

// void setZeroes(vector<vector<int>> &matrix)
// {
//     int m = matrix.size();
//     int n = matrix[0].size();

//     bool firstRowZero = false;
//     bool firstColZero = false;

//     for (int j = 0; j < n; j++)
//     {
//         if (matrix[0][j] == 0)
//         {
//             firstRowZero = true;
//             break;
//         }
//     }

//     for (int i = 0; i < m; i++)
//     {
//         if (matrix[i][0] == 0)
//         {
//             firstColZero = true;
//             break;
//         }
//     }

//     for (int i = 1; i < m; i++)
//     {
//         for (int j = 1; j < n; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 matrix[i][0] = 0;
//                 matrix[0][j] = 0;
//             }
//         }
//     }

//     for (int i = 1; i < m; i++)
//     {
//         for (int j = 1; j < n; j++)
//         {
//             if (matrix[i][0] == 0 || matrix[0][j] == 0)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     if (firstRowZero)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             matrix[0][j] = 0;
//         }
//     }

//     if (firstColZero)
//     {
//         for (int i = 0; i < m; i++)
//         {
//             matrix[i][0] = 0;
//         }
//     }
// }
// Time Complexity: O(m × n)

// ########################################################################
// ################ PROBLEM: Rotate Image by 90 degree ####################
// ########################################################################

// ############################ BRUTE FORCE ###################################

// vector<vector<int>> rotateClockwise(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();

//     vector<vector<int>> rotated(n, vector<int>(n));

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             rotated[j][n - i - 1] = matrix[i][j];
//         }
//     }

//     return rotated;
// }

// Time Complexity: O(N²)

//  ############################ OPTIMAL APPROACH ###################################

// void rotateClockwise(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = i + 1; j < n; ++j)
//         {
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }

//     for (int i = 0; i < n; ++i)
//     {
//         reverse(matrix[i].begin(), matrix[i].end());
//     }
// }
// Time Complexity: O(N²)