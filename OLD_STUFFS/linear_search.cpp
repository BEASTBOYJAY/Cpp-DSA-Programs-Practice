#include <iostream>
using namespace std;


int linearsearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if (arr[i]==element)
        {
            int index=i;
            return index;
        }
    }
}

int binarysearch(int arr[],int size,int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    mid=(low+high)/2;
    //starts searching
    while(low<=high)
    {
        if(arr[mid]==element)
        {
            return mid;
        }
        else if (arr[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    //end search
    return -1;
}
int main()
{   //unsorted arrya for linear search
    int arr[10]={21,31,41,2,5,3,14,16,4,32};
    int size=sizeof(arr)/sizeof(int);

     //sorted arrya for bineary search
    // int arr[10]={1,4,12,16,36,67,88,111,135,666};
    // int size=sizeof(arr)/sizeof(int);
    int element=16;
    int searchindex=linearsearch(arr,size,element);
    // int searchindex=binarysearch(arr,size,element);
    cout<<"the element is: "<<element<<" found at "<<searchindex;
    return 0;
}