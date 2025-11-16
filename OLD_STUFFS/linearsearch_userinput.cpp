#include<iostream>
using namespace std;

int linearsearch(int arr[],int size,int element)
{
    for (int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{   
    int arrsize;
    cout<<"enter the size of array you want "<<endl;
    cin>>arrsize;
    int arr[arrsize];

    for(int i=0;i<arrsize;i++)
    {
        cout<<"enter the "<<i+1<<"th element"<<endl;
        cin>>arr[i];
    }
    
    cout<<"your array is "<<endl;
    for (int i=0;i<arrsize;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int find;
    cout<<"enter the no.to find"<<endl;
    cin>>find;
    int sol=linearsearch(arr,arrsize,find);
    if(sol==-1)
    {
        cout<<"element not found";
    }
    else
    {
        cout<<"element "<<find<<" found at index "<<sol;
    }


    return 0;
}