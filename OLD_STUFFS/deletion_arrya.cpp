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


void inddeletion(int arr[],int size,int index)
{
    for(int i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }

}

int main()
{
    int arr[100]={19,12,51,41,21};
    int size=5;
    int element=45;
    int index=3;
    display(arr,size);
    inddeletion(arr,size,index);
    size--;
    display(arr,size);
    return 0;
}
