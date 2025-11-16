#include <iostream>
using namespace std;

// using ASCCI code for this question 
//like A-65,B-66.....90 and a-97,b-98....122 find the difference between them 97-65=32 
//ab agee code me dekho

// int main()
// {
//     char A[]="WELCOME";

//     for (int i=0;A[i]!='\0';i++)
//     {
//         A[i]=A[i]+32;
//     }

//     cout<<A;

//     return 0;
// }


int main()
{
    char A[]="WeLcOmE";
    for(int i=0;A[i]!='\0';i++)
    {
        if(A[i]>=65 && A[i]<=90)
        {
            A[i]=A[i]+32;
        }
        else if (A[i]>=97 &&A[i]<=122)
        {
            A[i]=A[i]-32;
        }
    }

    cout<<A;
}
