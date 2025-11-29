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

#include <algorithm>

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