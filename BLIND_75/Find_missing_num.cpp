#include <bits/stdc++.h>
using namespace std;


// ########################################## BURTE FORCE ##########################################

// int missingNum(vector<int>& arr) {
//     int n = arr.size() + 1;

//     for (int i = 1; i <= n; i++) {
//         bool found = false;
//         for (int j = 0; j < n - 1; j++) {
//             if (arr[j] == i) {
//                 found = true;
//                 break;
//             }
//         }

//         if (!found)
//             return i;
//     }
//     return -1;
// }

// int main() {
//     vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
//     cout << missingNum(arr) << endl; 
//     return 0;
// }



// ########################################## BETTER APPORACH ##########################################


// int missingNum(vector<int> &arr) {

//     int n = arr.size() + 1;

//     vector<int> hash(n + 1, 0);
//     for (int i = 0; i < n - 1; i++) {
//         hash[arr[i]]++;
//     }

//     for (int i = 1; i <= n; i++) {
//         if (hash[i] == 0) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     vector<int> arr = {8, 2, 4, 5, 3, 7, 1};
//     int res = missingNum(arr);
//     cout << res << endl;
//     return 0;
// }


// ########################################## OPTIMAL APPORACH 1 ##########################################

// int missingNum(vector<int> &arr) {
//     int n = arr.size() + 1;
  
//     // Calculate the sum of array elements
//     int sum = 0;
//     for (int i = 0; i < n - 1; i++) {
//         sum += arr[i];
//     }

//     // Calculate the expected sum
//     long long expSum = (n *1LL* (n + 1)) / 2;  

//     // Return the missing number
//     return expSum - sum;
// }

// int main() {
//     vector<int> arr = {8, 2, 4, 5, 3, 7, 1};  
//     cout << missingNum(arr);  
//     return 0;
// }


// ########################################## OPTIMAL APPORACH 2 ##########################################

// int missingNum(vector<int>& arr) {
//     int n = arr.size() + 1;
//     int xor1 = 0, xor2 = 0;

//     for (int i = 0; i < n - 1; i++) {
//         xor2 ^= arr[i];
//     }

//     for (int i = 1; i <= n; i++) {
//         xor1 ^= i;
//     }

//     return xor1 ^ xor2;
// }

// int main() {
//     vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
//     int res = missingNum(arr);  
//     cout << res << endl;  
//     return 0;
// }