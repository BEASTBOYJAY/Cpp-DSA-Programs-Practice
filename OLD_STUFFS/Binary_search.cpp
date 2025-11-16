// Binary Search in C++

#include <iostream>
using namespace std;

int binarySearch(int array[], int element, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = (high + low) / 2;

    if (array[mid] == element)
      return mid;

    if (array[mid] < element)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int element = 6;
  int n = sizeof(array) / sizeof(int);
  int result = binarySearch(array, element, 0, n - 1);
  if (result == -1)
    cout<<"Not found"<<endl;
  else
    cout<<"Element is found at index "<<result;
}