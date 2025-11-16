#include <iostream>
using namespace std;

//*********check palindrome********

// int check(char A[])
// {
//     int size = sizeof(A) / sizeof(A[0]);
//     char B[size];

//     int i = 0;
//     while (A[i] != '\0')
//     {
//         i++;
//     }
//     i--;
//     for (int j = 0; i >= 0; i--, j++)
//     {
//         B[j] = A[i];
//     }
//     B[i] = '\0';

//     for (int i = 0, j = 0; A[i] != '\0'; i++, j++)
//     {
//         if (A[i] == A[j])
//         {
//             // break;
//             return 1;
//         }
//         else
//         {
//             // break;
//             return 0;
//         }
//     }
// }

void revcheck(char A[])
{
    int i=0,j=0;
    while (A[j]!='\0')
    {
        j++;
    }
    j--;
    for(i;j>i;i++,j--)
    {
        if(A[i]==A[j])
        {
            cout<<"its a palindrome"<<endl;
        }
        else
        {
            cout<<"its not a palindrome"<<endl;
        }
    }
}

int main()
{
    char A[] = "madam";
    revcheck(A);
    return 0;
}
