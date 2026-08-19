#include <iostream>
#include <map>
using namespace std;


// ################################### BRUTE FORCE ######################################

// void two_sum(int arr[],int target,int length)
// {
//     for(int i=0;i<length;i++)
//     {
//         for (int j=0;j<length;j++)
//         {
//             if(arr[i]+arr[j]==target)
//             {
//                 cout<<i<<" "<<j<<endl;
//             }
//         }
//     }
// }
// int main()
// {
//     int target = 9;
//     int arr[] = {2,7,11,15};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     two_sum(arr,target,length);
// }


// ################################### BETTER APPROACH ######################################


// void two_sum(int arr[], int target,int length) {
//         map<int, int> mp; 
//         for (int i = 0; i < length; i++) {
//             int complement = target - arr[i];
//             if (mp.find(complement) != mp.end()) {
//                 cout<<mp[complement]<< " " << i << endl;
//             }
//             mp[arr[i]] = i;
//         }
//     }
// int main()
// {
//     int target = 9;
//     int arr[] = {2,7,11,15};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     two_sum(arr,target,length);
// }
