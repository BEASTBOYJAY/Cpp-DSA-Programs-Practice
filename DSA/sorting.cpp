#include <iostream>
using namespace std;

// ######################################################
// #################### SELECTION SORT ##################
// ######################################################

// void selection_sort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int mini = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[mini])
//             {
//                 mini = j;
//             }
//         }
//         int temp = arr[mini];
//         arr[mini] = arr[i];
//         arr[i] = temp;
//     }

//     cout << "After selection sort: " << "\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
// }
// int main()
// {
//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before selection sort: " << "\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     selection_sort(arr, n);
//     return 0;
// }
// Time complexity: O(N2)

// ######################################################
// #################### BUBBLE SORT #####################
// ######################################################

// void bubble_sort(int arr[], int n)
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         for (int j = 0; j <= i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     cout << "After Using bubble sort: " << "\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
// }
// Time complexity: wrost:O(N2), best:O(N)

// int main()
// {
//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before Using Bubble Sort: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     bubble_sort(arr, n);
//     return 0;
// }

// ######################################################
// ################## INSERTION SORT ####################
// ######################################################

// void insertion_sort(int arr[], int n)
// {
//     for (int i = 0; i <= n - 1; i++)
//     {
//         int j = i;
//         while (j > 0 && arr[j - 1] > arr[j])
//         {
//             int temp = arr[j - 1];
//             arr[j - 1] = arr[j];
//             arr[j] = temp;
//             j--;
//         }
//     }

//     cout << "After Using insertion sort: " << "\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
// }

// int main()
// {
//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before Using insertion Sort: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     insertion_sort(arr, n);
//     return 0;
// }

// ######################################################
// ##################### MERGE SORT #####################
// ######################################################

// #include <vector>

// class Solution
// {
// public:
//     // Function to merge two halves of the array
//     void merge(vector<int> &arr, int low, int mid, int high)
//     {
//         // Create temp arrays
//         vector<int> temp;
//         int left = low, right = mid + 1;

//         // Merge two sorted halves
//         while (left <= mid && right <= high)
//         {
//             if (arr[left] <= arr[right])
//                 temp.push_back(arr[left++]);
//             else
//                 temp.push_back(arr[right++]);
//         }

//         // Copy remaining elements from left half
//         while (left <= mid)
//             temp.push_back(arr[left++]);

//         // Copy remaining elements from right half
//         while (right <= high)
//             temp.push_back(arr[right++]);

//         // Copy sorted elements back to original array
//         for (int i = low; i <= high; i++)
//             arr[i] = temp[i - low];
//     }

//     // Recursive merge sort function
//     void mergeSort(vector<int> &arr, int low, int high)
//     {
//         if (low >= high)
//             return;

//         // Find the middle index
//         int mid = (low + high) / 2;

//         // Recursively sort left half
//         mergeSort(arr, low, mid);

//         // Recursively sort right half
//         mergeSort(arr, mid + 1, high);

//         // Merge the two sorted halves
//         merge(arr, low, mid, high);
//     }
// };

// int main()
// {
//     vector<int> arr = {5, 2, 8, 4, 1};
//     Solution sol;
//     sol.mergeSort(arr, 0, arr.size() - 1);
//     for (int x : arr)
//         cout << x << " ";
//     cout << endl;
//     return 0;
// }

// Time Complexity: O(N*logN)

// ######################################################
// ##################### QUICK SORT #####################
// ######################################################

// #include <vector>
// class Solution
// {
// public:
//     // Function to perform quicksort
//     void quickSort(vector<int> &arr, int low, int high)
//     {
//         // Base case: if low is not less than high
//         if (low < high)
//         {
//             // Find pivot index after partitioning
//             int pivotIndex = partition(arr, low, high);

//             // Recursively sort elements before pivot
//             quickSort(arr, low, pivotIndex - 1);

//             // Recursively sort elements after pivot
//             quickSort(arr, pivotIndex + 1, high);
//         }
//     }

//     // Function to partition the array
//     int partition(vector<int> &arr, int low, int high)
//     {
//         // Choose the last element as pivot
//         int pivot = arr[high];

//         // Initialize i to place smaller elements
//         int i = low - 1;

//         // Traverse the array
//         for (int j = low; j < high; j++)
//         {
//             // If element is smaller than or equal to pivot
//             if (arr[j] <= pivot)
//             {
//                 // Increment i and swap with j
//                 i++;
//                 swap(arr[i], arr[j]);
//             }
//         }

//         // Place pivot in correct position
//         swap(arr[i + 1], arr[high]);

//         // Return pivot index
//         return i + 1;
//     }
// };

// int main()
// {
//     // Sample array
//     vector<int> arr = {10, 7, 8, 9, 1, 5};

//     // Create solution object
//     Solution sol;

//     // Apply quicksort
//     sol.quickSort(arr, 0, arr.size() - 1);

//     // Print sorted array
//     for (int num : arr)
//         cout << num << " ";

//     return 0;
// }
// // Time Complexity: O(N*logN)