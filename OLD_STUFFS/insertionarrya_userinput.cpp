#include <iostream>
using namespace std;

void display(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}

int insertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
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

int main()
{
    int size;
    int used;
    cout << "enter the size of the arrya" << endl;
    cin >> size;

    cout << "enter the number of amount of element you want to enter" << endl;
    cin >> used;

    int arr[size];

    for (int i = 0; i < used; i++)
    {
        cout << "enter the " << i + 1 << "th element ";
        cin >> arr[i];
    }
    cout << "your array is " << endl;

    display(arr,used);

    int element, index;
    cout << "enter the element you want to  enter" << endl;
    cin >> element;
    cout << "enter the index no. where you want to insert the element" << endl;
    cin >> index;

    int sol = insertion(arr, used, element, size, index);
    if (sol == -1)
    {
        cout << "insertion not done" << endl;
    }
    else
    {
        cout << "insertion done" << endl;
        used++;
    }

    display(arr,used);

    return 0;
}