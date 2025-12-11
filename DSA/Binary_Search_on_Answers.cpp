#include <iostream>
using namespace std;
#include <vector>

// ###########################################################################################
// ################ PROBLEM: Finding Sqrt of a number using Binary Search ####################
// ###########################################################################################

// ############################ BRUTE FORCE ###################################

// int floorSqrt(int n)
// {
//     int ans = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         if ((long long)i * i <= n)
//         {
//             ans = i;
//         }
//         else
//         {
//             break;
//         }
//     }
//     return ans;
// }

// Time Complexity: O(N)

// ############################ OPTIMAL APPROACH ###################################

// int mySqrt(int x)
// {
//     if (x < 2)
//         return x;

//     int left = 1, right = x / 2, ans = 0;

//     while (left <= right)
//     {
//         long long mid = left + (right - left) / 2;

//         if (mid * mid <= x)
//         {
//             ans = mid;
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid - 1;
//         }
//     }

//     return ans;
// }

// Time Complexity: O(log(N))

// #######################################################################################
// ################ PROBLEM: Nth Root of a Number using Binary Search ####################
// #######################################################################################

// ############################ BRUTE FORCE ###################################

// int nthRoot(int n, int m)
// {
//     for (int i = 1; i <= m; i++)
//     {
//         long long power = pow(i, n);

//         if (power == m)
//             return i;

//         if (power > m)
//             break;
//     }

//     return -1;
// }

// Time Complexity: O(M)

// ############################ OPTIMAL APPROACH ###################################

// int nthRoot(int n, int m)
// {
//     int low = 1, high = m;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         long long ans = 1;
//         for (int i = 0; i < n; i++)
//         {
//             ans *= mid;
//             if (ans > m)
//                 break;
//         }

//         if (ans == m)
//             return mid;

//         if (ans < m)
//             low = mid + 1;

//         else
//             high = mid - 1;
//     }

//     return -1;
// }

// Time Complexity: O(logM)

// ##################################################################
// ################ PROBLEM: Koko Eating Bananas ####################
// ##################################################################

// ############################ BRUTE FORCE ###################################

// int calculateTotalHours(vector<int> &a, int hourly)
// {
//     int totalHours = 0;
//     for (int pile : a)
//     {
//         totalHours += (pile + hourly - 1) / hourly;
//     }
//     return totalHours;
// }

// int minEatingSpeed(vector<int> &a, int h)
// {
//     int maxVal = *max_element(a.begin(), a.end());

//     for (int i = 1; i <= maxVal; i++)
//     {
//         int hours = calculateTotalHours(a, i);

//         if (hours <= h)
//         {
//             return i;
//         }
//     }
//     return maxVal;
// }

// Time Complexity: O(n * max(a[]))

// ############################ OPTIMAL APPROACH ###################################

// int calculateTotalHours(vector<int> &piles, int speed)
// {
//     int totalH = 0;
//     for (int bananas : piles)
//     {
//         totalH += ceil((double)bananas / speed);
//     }
//     return totalH;
// }

// int minEatingSpeed(vector<int> &piles, int h)
// {
//     int maxPile = *max_element(piles.begin(), piles.end());

//     int low = 1, high = maxPile;
//     int ans = maxPile;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         int totalH = calculateTotalHours(piles, mid);

//         if (totalH <= h)
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

// Time Complexity: O(N*log(max(a[])))