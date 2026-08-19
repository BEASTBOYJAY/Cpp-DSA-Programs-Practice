#include <iostream>
using namespace std;
#include <vector>


// ######################################### BRUTE FORCE #########################################

// void check_duplicate(vector<int> nums)
// {
//     int size=nums.size();

//     for (int i=0;i<size;i++)
//     {
//         for (int j=i+1;j<size;j++)
//         {
//             if(nums[i]==nums[j])
//             {
//                 cout<< "DUPLICATE FOUND";
//                 return;
//             }
//         }
//     }
//     cout<< "NO DUPLICATE FOUND";
// }

// int main()
// {
//     vector<int> arr={1,2,3,4,5,6};
//     check_duplicate(arr);

//     return 0;
// }


// ######################################### BETTER APPORACH #########################################

// #include <algorithm>

// void check_duplicate(vector<int> nums)
// {
//     int size=nums.size();
//     sort(nums.begin(),nums.end());
    
//     for (int i=0;i<size-1;i++)
//     {
//         if(nums[i]==nums[i+1])
//         {
//             cout<< "DUPLICATE FOUND";
//             return;
//         }
//     }
//     cout<< "NO DUPLICATE FOUND";
// }
// int main()
// {
//     vector<int> arr={1,2,3,4,5,1};
//     check_duplicate(arr);

//     return 0;
// }


// ######################################### OPTIMAL APPORACH #########################################

// #include <set>

// void check_duplicate(vector<int> nums)
// {
//     int vec_size=nums.size();
    
//     set<int> nums_set(nums.begin(), nums.end());
    
//     int set_size=nums_set.size();
//     if (vec_size==set_size)
//     {
//         cout<< "NO DUPLICATE FOUND";
//     }
//     else
//     {
//         cout<< "DUPLICATE FOUND";
//     }
// }


// int main()
// {
//     vector<int> arr={1,2,3,4,5,6};
//     check_duplicate(arr);

//     return 0;
// }