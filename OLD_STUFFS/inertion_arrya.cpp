#include <iostream>
using namespace std ;

void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}


int indinsertion(int arr[],int size,int element,int capacity,int index)
{
    if(size>=capacity)
    {
        return -1;
    }
    for(int i=size;i>=index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=element;

    return 1;
}

int main()
{
    int arr[100]={19,12,51,41,21};
    int size=5;
    int element=45;
    int index=3;
    display(arr,size);
    indinsertion(arr,size,element,100,index);
    size++;
    display(arr,size);
    return 0;
}