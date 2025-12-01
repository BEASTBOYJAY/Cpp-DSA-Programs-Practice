#include <iostream>
using namespace std;

#include <vector>

// ####################################################################################
// ################ PROBLEM: Program to generate Pascal's Triangle ####################
// ####################################################################################

// ############################ ONLY APPROACH ###################################

// vector<vector<int>> generate(int numRows)
// {
//     vector<vector<int>> triangle;

//     for (int i = 0; i < numRows; i++)
//     {
//         vector<int> row(i + 1, 1);

//         for (int j = 1; j < i; j++)
//         {
//             row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
//         }

//         triangle.push_back(row);
//     }
//     return triangle;
// }
// Time Complexity: O(N^2)

// ############################################################################################
// ################ PROBLEM: Program to get nth row from Pascal's Triangle ####################
// ############################################################################################

// ############################ ONLY APPROACH ###################################

// vector<long long> getNthRow(int N)
// {
//     // Result vector to store the row
//     vector<long long> row;

//     // First value of the row is always 1
//     long long val = 1;
//     row.push_back(val);

//     // Compute remaining values using the relation:
//     // C(n, k) = C(n, k-1) * (n-k) / k
//     for (int k = 1; k < N; k++)
//     {
//         val = val * (N - k) / k;
//         row.push_back(val);
//     }

//     return row;
// }
// Time Complexity : O(N)

// ############################################################################################
// ################ PROBLEM: Program to get element from Pascal's Triangle ####################
// ############################################################################################

//  ############################ ONLY APPROACH ###################################

// long long findPascalElement(int r, int c)
// {
//     // Element is C(r-1, c-1)
//     int n = r - 1;
//     int k = c - 1;

//     long long result = 1;

//     // Compute C(n, k) using iterative formula
//     for (int i = 0; i < k; i++)
//     {
//         result *= (n - i);
//         result /= (i + 1);
//     }

//     return result;
// }

// Time Complexity: O(min(c,r−c))

// ##############################################################################################################
// ################ PROBLEM: Find the elements that appears more than N/3 times in the array ####################
// ##############################################################################################################

// ############################ BRUTE FORCE ###################################

// vector<int> majorityElementTwo(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> result;

//     for (int i = 0; i < n; i++)
//     {

//         if (result.size() == 0 || result[0] != nums[i])
//         {
//             int cnt = 0;
//             for (int j = 0; j < n; j++)
//             {
//                 if (nums[j] == nums[i])
//                 {
//                     cnt++;
//                 }
//             }

//             if (cnt > (n / 3))
//                 result.push_back(nums[i]);
//         }

//         if (result.size() == 2)
//             break;
//     }

//     return result;
// }
// Time Complexity: O(N^2)

// ############################ BETTER APPROACH ###################################

// #include <unordered_map>
// vector<int> majorityElementTwo(vector<int> &nums)
// {

//     int n = nums.size();
//     vector<int> result;
//     unordered_map<int, int> mpp;

//     int mini = int(n / 3) + 1;

//     for (int i = 0; i < n; i++)
//     {
//         mpp[nums[i]]++;
//         if (mpp[nums[i]] == mini)
//         {
//             result.push_back(nums[i]);
//         }
//         if (result.size() == 2)
//         {
//             break;
//         }
//     }
//     return result;
// }
// Time Complexity: O(N * logN)

//  ############################ OPTIMAL APPROACH ###################################

// vector<int> majorityElementTwo(vector<int> &nums)
// {

//     int n = nums.size();

//     int cnt1 = 0, cnt2 = 0;

//     int el1 = INT_MIN, el2 = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {

//         if (cnt1 == 0 && el2 != nums[i])
//         {
//             cnt1 = 1;
//             el1 = nums[i];
//         }
//         else if (cnt2 == 0 && el1 != nums[i])
//         {
//             cnt2 = 1;
//             el2 = nums[i];
//         }
//         else if (nums[i] == el1)
//         {
//             cnt1++;
//         }
//         else if (nums[i] == el2)
//         {
//             cnt2++;
//         }
//         else
//         {
//             cnt1--;
//             cnt2--;
//         }
//     }

//     cnt1 = 0, cnt2 = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] == el1)
//         {
//             cnt1++;
//         }
//         if (nums[i] == el2)
//         {
//             cnt2++;
//         }
//     }

//     int mini = n / 3 + 1;

//     vector<int> result;

//     if (cnt1 >= mini)
//     {
//         result.push_back(el1);
//     }
//     if (cnt2 >= mini && el1 != el2)
//     {
//         result.push_back(el2);
//     }

//     return result;
// }
// Time Complexity: O(N)

// ##########################################################################################
// ################ PROBLEM: 3 Sum : Find triplets that add up to a zero ####################
// ##########################################################################################

// ############################ BRUTE FORCE ###################################

// #include <set>
// #include <algorithm>

// vector<vector<int>> threeSum(vector<int> &arr, int n)
// {
//     set<vector<int>> st;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (arr[i] + arr[j] + arr[k] == 0)
//                 {
//                     vector<int> temp = {arr[i], arr[j], arr[k]};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }
//     }
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }

// Time Complexity: O(N3 * log(no. of unique triplets)

//  ############################ BETTER APPROACH ###################################

// #include <set>
// #include <algorithm>

// vector<vector<int>> threeSum(vector<int> &arr, int n)
// {
//     set<vector<int>> ans;

//     for (int i = 0; i < n; i++)
//     {
//         set<int> hashset;

//         for (int j = i + 1; j < n; j++)
//         {
//             int third = -(arr[i] + arr[j]);

//             if (hashset.find(third) != hashset.end())
//             {
//                 vector<int> temp = {arr[i], arr[j], third};
//                 sort(temp.begin(), temp.end());
//                 ans.insert(temp);
//             }

//             hashset.insert(arr[j]);
//         }
//     }

//     return vector<vector<int>>(ans.begin(), ans.end());
// }

// Time Complexity: O(N2 * log(no. of unique triplets))

//  ############################ OPTIMAL APPROACH ###################################

// #include <algorithm>

// vector<vector<int>> threeSum(vector<int> &arr, int n)
// {
//     sort(arr.begin(), arr.end());
//     vector<vector<int>> ans;

//     for (int i = 0; i < n; i++)
//     {
//         if (i > 0 && arr[i] == arr[i - 1])
//             continue;

//         int left = i + 1, right = n - 1;

//         while (left < right)
//         {
//             int sum = arr[i] + arr[left] + arr[right];

//             if (sum == 0)
//             {
//                 ans.push_back({arr[i], arr[left], arr[right]});
//                 left++, right--;

//                 while (left < right && arr[left] == arr[left - 1])
//                     left++;
//                 while (left < right && arr[right] == arr[right + 1])
//                     right--;
//             }
//             else if (sum < 0)
//                 left++;
//             else
//                 right--;
//         }
//     }
//     return ans;
// }

// Time Complexity: O(NlogN)+O(N2)

// ###############################################################################################
// ################ PROBLEM: 3 Sum : Find Quads that add up to a target value ####################
// ###############################################################################################

// ############################ BRUTE FORCE ###################################

// #include <set>
// #include <algorithm>

// vector<vector<int>> fourSum(vector<int> &arr, int target)
// {
//     int n = arr.size();
//     set<vector<int>> st;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 for (int l = k + 1; l < n; l++)
//                 {
//                     long long sum = (long long)arr[i] + arr[j] + arr[k] + arr[l];
//                     if (sum == target)
//                     {
//                         vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
//                         sort(temp.begin(), temp.end());
//                         st.insert(temp);
//                     }
//                 }
//             }
//         }
//     }
//     return vector<vector<int>>(st.begin(), st.end());
// }

// Time Complexity: O(N4 * log(no. of unique triplets))

//  ############################ BETTER APPROACH ###################################

// #include <set>
// #include <unordered_set>
// #include <algorithm>

// vector<vector<int>> fourSum(vector<int> &arr, int target)
// {
//     int n = arr.size();
//     set<vector<int>> st;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             unordered_set<int> seen;

//             for (int k = j + 1; k < n; k++)
//             {
//                 long long required = (long long)target - arr[i] - arr[j] - arr[k];

//                 if (seen.count(required))
//                 {
//                     vector<int> temp = {arr[i], arr[j], arr[k], (int)required};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }

//                 seen.insert(arr[k]);
//             }
//         }
//     }

//     return vector<vector<int>>(st.begin(), st.end());
// }

// Time Complexity: O(N3*log(M))

//  ############################ OPTIMAL APPROACH ###################################

// #include <algorithm>

// vector<vector<int>> fourSum(vector<int> &arr, int target)
// {
//     int n = arr.size();
//     vector<vector<int>> ans;

//     sort(arr.begin(), arr.end());

//     for (int i = 0; i < n; i++)
//     {
//         if (i > 0 && arr[i] == arr[i - 1])
//             continue;

//         for (int j = i + 1; j < n; j++)
//         {
//             if (j > i + 1 && arr[j] == arr[j - 1])
//                 continue;

//             int left = j + 1, right = n - 1;
//             while (left < right)
//             {
//                 long long sum = (long long)arr[i] + arr[j] +
//                                 arr[left] + arr[right];

//                 if (sum == target)
//                 {
//                     ans.push_back({arr[i], arr[j],
//                                    arr[left], arr[right]});

//                     while (left < right && arr[left] == arr[left + 1])
//                         left++;
//                     while (left < right && arr[right] == arr[right - 1])
//                         right--;

//                     left++;
//                     right--;
//                 }
//                 else if (sum < target)
//                     left++;
//                 else
//                     right--;
//             }
//         }
//     }
//     return ans;
// }

// Time Complexity: O(N3)

// ###################################################################################################
// ################ PROBLEM: 3 Sum : Length of the longest subarray with zero Sum ####################
// ###################################################################################################

// ############################ BRUTE FORCE ###################################

// int solve(vector<int> &a)
// {
//     int maxLen = 0;
//     unordered_map<int, int> sumIndexMap;
//     int sum = 0;

//     for (int i = 0; i < (int)a.size(); i++)
//     {
//         sum += a[i];

//         if (sum == 0)
//         {
//             maxLen = i + 1;
//         }
//         else if (sumIndexMap.find(sum) != sumIndexMap.end())
//         {
//             maxLen = max(maxLen, i - sumIndexMap[sum]);
//         }
//         else
//         {
//             sumIndexMap[sum] = i;
//         }
//     }

//     return maxLen;
// }

// Time Complexity: O(N^2)

// ############################ OPTIMAL APPROACH ###################################

// int maxLen(int A[], int n)
// {
//     unordered_map<int, int> mpp;
//     int maxi = 0;
//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sum += A[i];

//         if (sum == 0)
//         {
//             maxi = i + 1;
//         }
//         else
//         {
//             if (mpp.find(sum) != mpp.end())
//             {
//                 maxi = max(maxi, i - mpp[sum]);
//             }
//             else
//             {
//                 mpp[sum] = i;
//             }
//         }
//     }

//     return maxi;
// }

// Time Complexity: O(n)

// #####################################################################################################
// ################ PROBLEM: 3 Sum : Count the number of subarrays with given xor K ####################
// #####################################################################################################

// ############################ BRUTE FORCE ###################################

// int countSubarraysXOR(vector<int> &A, int B)
// {
//     int count = 0;
//     for (int i = 0; i < A.size(); i++)
//     {
//         int xorVal = 0;
//         for (int j = i; j < A.size(); j++)
//         {
//             xorVal ^= A[j];
//             if (xorVal == B)
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }
// Time Complexity: O(N^2)

// ############################ OPTIMAL APPROACH ###################################

// int countSubarrays(vector<int> &A, int k)
// {
//     unordered_map<int, int> freq;
//     freq[0] = 1;

//     int prefixXor = 0;
//     int count = 0;

//     for (int num : A)
//     {
//         prefixXor ^= num;

//         int target = prefixXor ^ k;

//         if (freq.find(target) != freq.end())
//         {
//             count += freq[target];
//         }

//         freq[prefixXor]++;
//     }
//     return count;
// }

// Time Complexity: O(N)

// ##############################################################################
// ################ PROBLEM: Merge Overlapping Sub-intervals ####################
// ##############################################################################

// ############################ BRUTE FORCE ###################################

// #include <algorithm>
// vector<vector<int>> merge(vector<vector<int>> &intervals)
// {

//     sort(intervals.begin(), intervals.end());

//     vector<vector<int>> ans;

//     int n = intervals.size();
//     for (int i = 0; i < n;)
//     {

//         int start = intervals[i][0];
//         int end = intervals[i][1];

//         int j = i + 1;
//         while (j < n && intervals[j][0] <= end)
//         {
//             end = max(end, intervals[j][1]);
//             j++;
//         }

//         ans.push_back({start, end});

//         i = j;
//     }

//     return ans;
// }

// Time Complexity: O(N^2)

//  ############################ OPTIMAL APPROACH ###################################

// #include <algorithm>
// vector<vector<int>> merge(vector<vector<int>> &intervals)
// {
//     sort(intervals.begin(), intervals.end());

//     vector<vector<int>> merged;

//     for (auto interval : intervals)
//     {
//         if (merged.empty() || merged.back()[1] < interval[0])
//         {
//             merged.push_back(interval);
//         }
//         else
//         {
//             merged.back()[1] = max(
//                 merged.back()[1],
//                 interval[1]);
//         }
//     }

//     return merged;
// }

// Time Complexity : O(N *logN) + O(N)

// ##########################################################################################
// ################ PROBLEM: Merge two Sorted Arrays Without Extra Space ####################
// ##########################################################################################

//  ############################ ONLY APPROACH ###################################

// void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
// {
//     int i = m - 1;

//     int j = n - 1;

//     int k = m + n - 1;

//     while (i >= 0 && j >= 0)
//     {
//         if (nums1[i] > nums2[j])
//         {
//             nums1[k--] = nums1[i--];
//         }
//         else
//         {
//             nums1[k--] = nums2[j--];
//         }
//     }

//     while (j >= 0)
//     {
//         nums1[k--] = nums2[j--];
//     }
// }

// Time Complexity: O(N+M)

// ##########################################################################################
// ################ PROBLEM: Find the repeating and missing numbers #########################
// ##########################################################################################

// ############################ BRUTE FORCE ###################################

// vector<int> findMissingRepeatingNumbers(vector<int> &nums)
// {

//     int n = nums.size();
//     int repeating = -1, missing = -1;

//     for (int i = 1; i <= n; i++)
//     {

//         int cnt = 0;

//         for (int j = 0; j < n; j++)
//         {
//             if (nums[j] == i)
//                 cnt++;
//         }

//         if (cnt == 2)
//             repeating = i;
//         else if (cnt == 0)
//             missing = i;

//         if (repeating != -1 && missing != -1)
//             break;
//     }

//     return {repeating, missing};
// }

// Time Complexity: O(N2)
//  ############################ BETTER APPROACH ###################################

// vector<int> findMissingRepeatingNumbers(vector<int> &nums)
// {

//     int n = nums.size();

//     int hash[n + 1] = {0};

//     for (int i = 0; i < n; i++)
//     {
//         hash[nums[i]]++;
//     }

//     int repeating = -1, missing = -1;

//     for (int i = 1; i <= n; i++)
//     {
//         if (hash[i] == 2)
//         {
//             repeating = i;
//         }
//         else if (hash[i] == 0)
//         {
//             missing = i;
//         }

//         if (repeating != -1 && missing != -1)
//         {
//             break;
//         }
//     }

//     return {repeating, missing};
// }

// Time Complexity: O(2*N)

// ############################ OPTIMAL APPROACH ###################################

// vector<int> findMissingRepeatingNumbers(vector<int> &nums)
// {

//     long long n = nums.size();

//     long long SN = (n * (n + 1)) / 2;

//     long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

//     long long S = 0, S2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         S += nums[i];
//         S2 += (long long)nums[i] * (long long)nums[i];
//     }

//     long long val1 = S - SN;

//     long long val2 = S2 - S2N;

//     val2 = val2 / val1;

//     long long x = (val1 + val2) / 2;
//     long long y = x - val1;

//     return {(int)x, (int)y};
// }

// Time Complexity: O(N)

// ############################ OPTIMAL APPROACH ###################################

// vector<int> findMissingRepeatingNumbers(vector<int> &nums)
// {

//     int n = nums.size();

//     int xr = 0;

//     for (int i = 0; i < n; i++)
//     {
//         xr = xr ^ nums[i];

//         xr = xr ^ (i + 1);
//     }

//     int number = (xr & ~(xr - 1));

//     int zero = 0;

//     int one = 0;

//     for (int i = 0; i < n; i++)
//     {

//         if ((nums[i] & number) != 0)
//         {

//             one = one ^ nums[i];
//         }
//         else
//         {
//             zero = zero ^ nums[i];
//         }
//     }

//     for (int i = 1; i <= n; i++)
//     {

//         if ((i & number) != 0)
//         {

//             one = one ^ i;
//         }
//         else
//         {
//             zero = zero ^ i;
//         }
//     }

//     int cnt = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] == zero)
//         {
//             cnt++;
//         }
//     }

//     if (cnt == 2)
//     {
//         return {zero, one};
//     }

//     return {one, zero};
// }

// Time Complexity: O(N)

// ################################################################################
// ################ PROBLEM: Count inversions in an array #########################
// ################################################################################

// ############################ BRUTE FORCE ###################################

// int numberOfInversions(vector<int> &a, int n)
// {
//     int cnt = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] > a[j])
//                 cnt++;
//         }
//     }
//     return cnt;
// }

// Time Complexity: O(N2)

// ############################ OPTIMAL APPROACH ###################################

// int merge(vector<int> &arr, int low, int mid, int high)
// {
//     vector<int> temp;

//     int left = low;
//     int right = mid + 1;

//     int cnt = 0;

//     while (left <= mid && right <= high)
//     {
//         if (arr[left] <= arr[right])
//         {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else
//         {
//             temp.push_back(arr[right]);
//             cnt += (mid - left + 1);
//             right++;
//         }
//     }

//     while (left <= mid)
//     {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     while (right <= high)
//     {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     for (int i = low; i <= high; i++)
//     {
//         arr[i] = temp[i - low];
//     }

//     return cnt;
// }

// int mergeSort(vector<int> &arr, int low, int high)
// {
//     int cnt = 0;

//     if (low >= high)
//         return cnt;

//     int mid = (low + high) / 2;

//     cnt += mergeSort(arr, low, mid);
//     cnt += mergeSort(arr, mid + 1, high);
//     cnt += merge(arr, low, mid, high);

//     return cnt;
// }

// int numberOfInversions(vector<int> &a, int n)
// {
//     return mergeSort(a, 0, n - 1);
// }

// Time Complexity: O(N log N)

// #######################################################################
// ################ PROBLEM: Count Reverse Pairs #########################
// #######################################################################

// ############################ BRUTE FORCE ###################################

// int countPairs(vector<int> &a, int n)
// {

//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] > 2 * a[j])
//                 cnt++;
//         }
//     }
//     return cnt;
// }

// Time Complexity: O(N2)

// ############################ OPTIMAL APPROACH ###################################

// void merge(vector<int> &arr, int low, int mid, int high)
// {
//     vector<int> temp;
//     int left = low;
//     int right = mid + 1;

//     while (left <= mid && right <= high)
//     {
//         if (arr[left] <= arr[right])
//         {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else
//         {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     while (left <= mid)
//     {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     while (right <= high)
//     {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     for (int i = low; i <= high; i++)
//     {
//         arr[i] = temp[i - low];
//     }
// }

// int countPairs(vector<int> &arr, int low, int mid, int high)
// {
//     int right = mid + 1;
//     int cnt = 0;
//     for (int i = low; i <= mid; i++)
//     {
//         while (right <= high && arr[i] > 2 * arr[right])
//             right++;
//         cnt += (right - (mid + 1));
//     }
//     return cnt;
// }

// int mergeSort(vector<int> &arr, int low, int high)
// {
//     int cnt = 0;
//     if (low >= high)
//         return cnt;
//     int mid = (low + high) / 2;
//     cnt += mergeSort(arr, low, mid);
//     cnt += mergeSort(arr, mid + 1, high);
//     cnt += countPairs(arr, low, mid, high);
//     merge(arr, low, mid, high);
//     return cnt;
// }

// int team(vector<int> &skill, int n)
// {
//     return mergeSort(skill, 0, n - 1);
// }
// Time Complexity: O(2N*logN)

// ########################################################################################
// ################ PROBLEM: Maximum Product Subarray in an Array #########################
// ########################################################################################

// ############################ BRUTE FORCE ###################################

// int maxProduct(vector<int> &nums)
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
// Time Complexity: O(N^2)

// ############################ 1st OPTIMAL APPROACH ###################################

// int maxProductSubArray(vector<int> &arr)
// {
//     int n = arr.size();

//     int pre = 1, suff = 1;

//     int ans = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         if (pre == 0)
//             pre = 1;

//         if (suff == 0)
//             suff = 1;

//         pre *= arr[i];

//         suff *= arr[n - i - 1];

//         ans = max(ans, max(pre, suff));
//     }

//     return ans;
// }

// Time Complexity: O(N)

// ############################ 2nd OPTIMAL APPROACH ###################################

// int maxProduct(vector<int> &nums)
// {
//     int res = nums[0];
//     int maxProd = nums[0];
//     int minProd = nums[0];

//     for (int i = 1; i < nums.size(); i++)
//     {
//         int curr = nums[i];

//         if (curr < 0)
//             swap(maxProd, minProd);

//         maxProd = max(curr, maxProd * curr);
//         minProd = min(curr, minProd * curr);

//         res = max(res, maxProd);
//     }

//     return res;
// }

// Time Complexity: O(N)