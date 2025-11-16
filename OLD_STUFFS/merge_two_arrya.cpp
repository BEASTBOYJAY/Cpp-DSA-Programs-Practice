#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int A[],int B[],int m,int n,int C[])
{
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(A[i]<B[j])
        {
            C[k++]=A[i++];
        }
        else
        {
            C[k++]=B[j++];
        }
    }

    while (i<m)
    {
        C[k++]=A[i++];
    }
    while (j<n)
    {
        C[k++]=B[j++];
    }
    
    // while (i<m)
    // {
    //     C[k++]=A[i++];
    // }
    // while(j<n)
    // {
    //     C[k++]=B[j++];
    // }

    // sort(C,C+m+n);
    
}

void display(int A[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int A[]={1,5,11,22};
    int B[]={2,4,20,15};
    int m=sizeof A/sizeof(A[0]);
    int n=sizeof B/sizeof(B[0]);
    int o=m+n;
    int C[o];
    display(A,m);
    display(B,n);
    merge(A,B,m,n,C);
    display(C,o);
}