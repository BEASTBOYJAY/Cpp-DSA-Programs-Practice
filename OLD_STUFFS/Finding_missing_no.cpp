//*************finding the single missing no. in a sorterd arrya
//*************numbers starting form the 1
#include <iostream>
using namespace std;

// void display(int A[],int size)
// {
//     for (int i=0;i<size;i++)
//     {
//         cout<<A[i]<<" ";
//     }
// }

// void missing(int A[],int len)
// {
//     int sum=0;
//     for(int i=0;i<len;i++)
//     {
//         sum=sum+A[i];
//     }
//     int n=A[9];
//     int total=(n*(n+1))/2;
//     int miss=total-sum;

//     cout<<"missing no. is "<<miss<<endl;

// }

// int main()
// {
//     int A[]={1,2,3,4,5,6,8,9,10,11};
//     int length=sizeof A/sizeof(A[0]);

//     missing(A,length);

//     return 0;
// }

//***************finding the single missing no. in a sorterd arrya***********
//***************numbers starting from any number to any number but difference the same

// void miss(int A[],int size)
// {
//     int l = A[0];
//     int h = A[size];
//     int diff=l-0;
 
//     for (int i=0;i<size;i++)
//     {
//         if(A[i]-i!=diff)
//         {
//             cout<<"missing no. is "<<i+diff<<endl;
//         }
//     }
// }

// int main()
// {
//     int A[]={6,7,8,9,10,11,13,14,15,16,17};
//     // int A[]={1,2,3,4,5,7,8,9,10};

//     int length=sizeof A/sizeof(A[0]);

//     miss(A,length);
//     return 0;
// }

//************finding multiple missing numbers in a sorted arrya**********
// *************METHOD 1!!!*********

// int find(int A[], int size)
// {
//     int l = A[0];
//     int diff = l - 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (A[i] - i != diff)
//         {
//             while (diff < A[i] - i)
//             {
//                 cout << "missing no. is " << i + diff << endl;
//                 diff++;
//             }
//         }
//     }
// }

// int main()
// {
//     int A[] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};
//     int length = sizeof A / sizeof(A[0]);

//     find(A, length);

//     return 0;
// }


//**********method 2  ********
//**********No. starting from 1*********
// hasing method use only if their is no memory issue


// void missing(int A[],int size)
// {
//     int l=A[0];
//     int h=A[size];
//     int H[A[size]];

//     for (int i=0;i<A[size];i++)
//     {
//         H[i]=0;
//     }

//     for(int i=0;i<size;i++)
//     {
//         H[A[i]]++;
//     }

//     for(int i=l;i<=h;i++)
//     {
//         if(H[i]==0)
//         {
//             cout<<"missing no. is "<<i<<endl;
//         }
//     }
// }



// int main()
// {
//     int A[]={1,2,3,4,6,7,9,10,11,12};
//     int length=sizeof A/ sizeof (A[0]);

//     missing(A,length);
//     return 0;
// }



