#include <bits/stdc++.h>
using namespace std;


// ################################################ BRUTE FORCE ################################################

// vector<vector<int>> threeSum(vector<int>& arr, int n)
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



// int main() {
//     vector<int> arr = {-1, 0, 1, 2, -1, -4};
//     int n = arr.size();
//     vector<vector<int>> res = threeSum(arr, n);

//     for (auto &triplet : res) {
//         for (auto &num : triplet) cout << num << " ";
//         cout << endl;
//     }
//     return 0;
// }


// ################################################ BETTER APPORACH ################################################

// vector<vector<int>> threeSum(vector<int>& arr, int n)
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

//         return vector<vector<int>>(ans.begin(), ans.end());
// }

// int main() {
//     vector<int> arr = {-1, 0, 1, 2, -1, -4};
//     int n = arr.size();
//     vector<vector<int>> res = threeSum(arr, n);

//     for (auto &triplet : res) {
//         for (auto &num : triplet) cout << num << " ";
//         cout << endl;
//     }
//     return 0;
// }


// ################################################ OPTIMAL APPORACH ################################################

vector<vector<int>> threeSum(vector<int>& arr, int n)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) 
    {
        if (i > 0 && arr[i] == arr[i - 1]) continue;

        int left = i + 1, right = n - 1;

        while (left < right) 
        {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == 0) 
            {
                ans.push_back({arr[i], arr[left], arr[right]});
                left++, right--;

                while (left < right && arr[left] == arr[left - 1]) left++;
                while (left < right && arr[right] == arr[right + 1]) right--;
            }
            else if (sum < 0) left++;
            else right--;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> res = threeSum(arr, n);

    for (auto &triplet : res) {
        for (auto &num : triplet) cout << num << " ";
        cout << endl;
    }
    return 0;
}