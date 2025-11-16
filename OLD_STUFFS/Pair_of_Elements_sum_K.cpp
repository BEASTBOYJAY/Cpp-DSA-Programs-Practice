#include <iostream>
using namespace std;

//************Finding a Pair of Elements with sum K  without any duplicates in a arrya*********

// void pair_for_sum(int A[],int size,int sum)
// {
//     for(int i=0;i<size-1;i++)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//             if(A[i]+A[j]==sum)
//             {
//                 cout<<A[i]<<" and "<<A[j]<<" Addup to make "<<" number "<<sum<<endl;
//             }
//         }
//     }
// }

// int main()
// {
//     int A[]={6,3,8,10,16,7,5,2,9,14};
//     int size=sizeof A/sizeof(*A);
//     int sum=10;
//     pair_for_sum(A,size,sum);

//     return 0;
// }


//*********Method 2********
//*********using hash tabel*********
//*******unsorted arrya*******

// int max1(int A[],int size)
// {
//     int sum=A[0];

//     for(int i=0;i<size-1;i++)
//     {
//         if(sum<A[i])
//         {
//             sum=A[i];
//         }
//     }
//     return sum;
// }


// void pair_for_sum(int A[],int size,int sum)
// {
//     int max=max1(A,size)+1;
//     int H[max];

//     for(int i=0;i<max-1;i++)
//     {
//         H[i]=0;
//     }

//     for(int i=0;i<size;i++)
//     {
//         if(H[sum-A[i]]!=0)
//         {
//             cout<<A[i]<<" + "<<"("<<sum-A[i]<<")"<<" = "<<sum<<endl;
//         }
//         H[A[i]]++;
//     }

// }



// int main()
// {
//     int A[]={6,3,8,10,16,7,5,2,9,14};
//     int size=sizeof A/sizeof(*A);
//     int sum=10;

//     pair_for_sum(A,size,sum);

//     return 0;
// }




// *********IN A SORTED ARRYA*********

void pair_for_sum(int A[],int size,int sum)
{
    int i=0;
    int j=sum-1;
    while(i<j)
    {
        if(A[i]+A[j]==sum)
        {
            cout<<A[i]<<" + "<<A[j]<<" = "<<sum<<endl;
            i++;
            j--;
        }
        else if(A[i]+A[j]<sum)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}



int main()
{
    int A[]={1,3,4,5,6,8,9,10,14,12};
    int size=sizeof A/sizeof(*A);
    int sum=10;

    pair_for_sum(A,size,sum);

    return 0;
}

