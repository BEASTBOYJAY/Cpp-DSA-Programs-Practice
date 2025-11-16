#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int insertion(int arr[], int size, int element, int capacity, int index)
{
    if (capacity <= size)
    {
        return -1;
    }

    for (int i = size; i >= index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;
    return 1;
}

void deletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int binarysearch(int arr[], int element, int low, int high)
{
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }

        if (arr[mid] > element)
        {
            low = mid + 1;
        }
        else
        {
            high = low - 1;
        }
    }
    return -1;
}

int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            int linear = i;
            return i;
        }
    }
    return -1;
}

int main()
{
    int capacity;
    cout << "enter the capacity of the arrya " << endl;
    cin >> capacity;

    int size;
    cout << "enter the no. of element you want to input " << endl;
    cin >> size;

    int arr[capacity];

    for (int i = 0; i < size; i++)
    {
        cout << "enter the " << i + 1 << "th element " << endl;
        cin >> arr[i];
    }

    cout << "your arrya is: ";

    display(arr, size);
    cout << endl
         << endl;

m:

    int option;
    cout << "enter the no. 1,2,3,4" << endl
         << endl;
    cout << "1 for insertion" << endl;
    cout << "2 for deletion" << endl;
    cout << "3 for binary search for sorted arrya" << endl;
    cout << "4 for linear search" << endl;

    cin >> option;

    switch (option)
    {
    case 1:
    {
        int element1, index1;
        cout << "enter the element you want to insert " << endl;
        cin >> element1;
        cout << "enter the index no. where you want to insert " << endl;
        cin >> index1;
        int insert = insertion(arr, size, element1, capacity, index1);
        if (insert == -1)
        {
            cout << "insertion didnt happen" << endl;
        }
        else
        {
            cout << "insertion done " << endl;
            size++;
            display(arr, size);
        }
        break;
    }
    case 2:
    {
        int index2;
        cout << "enter the index no. which you want delete ";
        cin >> index2;
        deletion(arr, size, index2);
        size--;
        display(arr, size);
        break;
    }
    default:
    {
        cout << "enter the valid no." << endl;
    }

    case 3:
    {
        int element2;
        cout << "enter the element you want to find " << endl;
        cin >> element2;
        int search = binarysearch(arr, element2, 0, size);
        if (search == -1)
        {
            cout << "ERROR" << endl;
        }
        else
        {
            cout << "searching done " << search << endl;
        }
        break;
    }

    case 4:
    {
        int element3;
        cout << "enter the element you want search " << endl;
        cin >> element3;
        int ls = linearsearch(arr, size, element3);
        if (ls == -1)
        {
            cout << "didnt find the element" << endl;
        }
        else
        {
            cout << "your element is found at " << ls << endl;
        }
        break;
    }
    }
    goto m;
    return 0;
}