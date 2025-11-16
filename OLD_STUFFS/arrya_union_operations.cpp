#include <iostream>
using namespace std;

/**********************UNSORTED ARRYA*********************/

// bool isDuplicate(int arr[], int size, int num) {
//     for (int i = 0; i < size; ++i) {
//         if (arr[i] == num) {
//             return true;
//         }
//     }
//     return false;
// }

// void printUnion(int arr1[], int arr2[], int size1, int size2) {
//     const int maxSize = size1 + size2;
//     int unionArray[maxSize];
//     int unionSize = 0;

//     // Insert elements from arr1 into the union array
//     for (int i = 0; i < size1; ++i) {
//         if (!isDuplicate(unionArray, unionSize, arr1[i])) {
//             unionArray[unionSize++] = arr1[i];
//         }
//     }

//     // Insert elements from arr2 into the union array
//     for (int i = 0; i < size2; ++i) {
//         if (!isDuplicate(unionArray, unionSize, arr2[i])) {
//             unionArray[unionSize++] = arr2[i];
//         }
//     }

//     // Print the union elements
//     cout << "Union of the arrays: ";
//     for (int i = 0; i < unionSize; ++i) {
//         std::cout << unionArray[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr1[] = {3, 1, 4, 6, 5};
//     int arr2[] = {7, 2, 4, 8, 5};
//     int size1 = sizeof(arr1) / sizeof(arr1[0]);
//     int size2 = sizeof(arr2) / sizeof(arr2[0]);

//     printUnion(arr1, arr2, size1, size2);

//     return 0;
// }

/************************SORTED ARRYA***********************/

void printunion (int A[], int B[], int m, int n)
{
    const int a = m + n;
    int C[a];

    int size = 0;
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[size++] = A[i];
            i++;
        }
        else if (B[j] < A[i])
        {
            C[size++] = B[j];
            j++;
        }

        else
        {
            C[size++] = A[i];
            i++;
            j++;
        }
    }

    while (i < m)
    {
        C[size++] = A[i];
        i++;
    }

    while (j < n)
    {
        C[size++] = B[j];
        j++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << C[i] << " ";
    }
}

int main()
{
    int A[] = {1, 3, 4, 5, 7};
    int B[] = {2, 3, 5, 6};

    int m = sizeof A / sizeof(*A);
    int n = sizeof B / sizeof(*B);

    printunion(A, B, m, n);

    return 0;
}