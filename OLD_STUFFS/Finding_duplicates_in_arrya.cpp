#include <iostream>
using namespace std;

// ***************finding the duplicates in a arrya in a sorted arrya************

// void dupli(int A[],int size)
// {
//     int lastdupli=0;

//     for(int i=0;i<size-1;i++)
//     {
//         if(A[i]==A[i+1] && A[i]!=lastdupli)
//         {
//             cout<<"duplicate no. is "<<A[i]<<endl;
//             lastdupli=A[i];
//         }
//     }
// }

// int main()
// {
//     int A[]={3,6,8,8,10,12,15,15,15,20};
//     int size=sizeof (A)/sizeof (A[0]);

//     dupli(A,size);

//     return 0;
// }

// ************finding how many duplicates are their in a arrya*********

// void misscount(int A[],int size)
// {
//     for(int i=0;i<size-1;i++)
//     {
//         if(A[i]==A[i+1])
//         {
//             int j=i+1;
//             while(A[j]==A[i])
//             {
//                 j++;
//             }
//             cout<<"number "<<A[i]<<" repeated "<<j-i<<" times"<<endl;
//             i=j-1;
//         }
//     }
// }

// int main()
// {
//     int A[]={3,6,8,8,10,12,15,15,15,20};
//     int size=sizeof (A)/sizeof (A[0]);

//     misscount(A,size);

//     return 0;
// }

//**********method 2******
//******using hashing******

// int dupli(int A[],int size)
// {
//     int H[A[size-1]+1];

//     for(int i=0;i<A[size-1];i++)
//     {
//         H[i]=0;
//     }

//     for(int i=0;i<size-1;i++)
//     {
//         H[A[i]]++;
//     }

//     for(int i=0;i<A[size-1];i++)
//     {
//         if(H[i]>1)
//         {
//             cout<<"number "<<i<<" repeated "<<H[i]<<" times"<<endl;
//         }
//     }
// }

// int main()
// {
//     int A[]={3,6,8,8,10,12,15,15,15,20};
//     int size=sizeof (A)/sizeof (A[0]);

//     dupli(A,size);

// }

//***********finding duplicates in an unsorted arrya***********

// void dupli(int A[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         int count = 1;

//         if (A[i] != -1)
//         {
//             for (int j = i + 1; i < j; j++)
//             {
//                 if (A[i] == A[j])
//                 {
//                     count++;
//                     A[j] = -1;
//                 }
//             }
//             if (count > 1)
//             {
//                 cout << A[i] << " is repeating" << count << "times" << endl;
//             }
//         }
//     }
// }

// int main()
// {
//     int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
//     int size = sizeof(A) / sizeof(A[0]);

//     dupli(A, size);

//     return 0;
// }




//*************Mehtod 2************

int maxA(int A[],int size)
{
    int MM=A[0];
    for(int i=1;i<size;i++)
    {
        if(A[i]>MM)
        {
            MM=A[i];
        }
    }
    return MM;
}


void dupli(int A[],int size)
{
    int max=maxA(A,size)+1;
    int H[max];

    for(int i=0;i<max;i++)
    {
        H[i]=0;
    }

    for(int i=0;i<max;i++)
    {
        H[A[i]]++;
    }

    for(int i=0;i<max;i++)
    {
        if(H[i]>1)
        {
            cout<<i<<" number is repeated "<<H[i]<<" times"<<endl;
        }
    }

}

int main()
{
    int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int size = sizeof(A) / sizeof(A[0]);

    dupli(A,size);

    return 0;
}
