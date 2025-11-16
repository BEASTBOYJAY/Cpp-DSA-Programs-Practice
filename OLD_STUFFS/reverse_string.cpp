#include <iostream>
using namespace std;

//*******METHOD 1*******

// void reverse(char A[],int size)
// {
//     // int size=sizeof A/sizeof(*A);
//     char B[size];
//     int i=0,j=0;
//     while(A[i]!='\0')
//     {i++;}
//     i=i-1;

//     for(j;i>=0;i--,j++)
//     {
//         B[j]=A[i];
//     }
//     B[i]='\0';

//     cout<<"REVERSED STRING IS: "<<B<<endl;

// }

// int main()
// {
//     char A[]="JAY";
//     int size=sizeof A/sizeof(*A);
//     reverse(A,size);
//     return 0;
// }

//********METHOD 2*********

void reverse(char A[])
{
    char t;
    int i=0,j=0;

    while (A[j]!='\0')
    {
        j++;
    }
    j--;

    for(i;i<j;i++,j--)
    {
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }
    
    cout<<"REVERSED STRING IS: "<<A<<endl;
}

int main()
{
    char A[]="python";

    reverse(A);


    return  0;
}
