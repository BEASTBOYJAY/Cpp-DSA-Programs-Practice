#include <iostream>
using namespace std;

int binarysearch(int arr[], int element, int low, int high)
{
    while (low <= high)
    {
        int mid = (high + low) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int sizeofarray = 0;
    cout << "enter the size of array you want" << endl;
    cin >> sizeofarray;
    int arr[sizeofarray];

    for (int i = 0; i < sizeofarray; i++)
    {
        cout << "enter the " << i + 1 << "th array" << endl;
        cin >> arr[i];
    }
    cout << "the array is" << endl;

    for (int i = 0; i < sizeofarray; i++)
    {
        cout << arr[i] << " ";
    }

    int element;
    cout << "enter the number you want to find" << endl;
    cin >> element;

    int n = sizeof(arr) / sizeof(int);
    int result = binarysearch(arr, element, 0, n - 1);
    if (result == -1)
    {
        cout << "element not found" << endl;
    }
    else
    {
        cout << "element is found at " << result;
    }

    return 0;
}
