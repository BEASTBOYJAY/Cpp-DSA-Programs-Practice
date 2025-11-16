#include <iostream>
using namespace std;

int validating(char A[])
{
    for (int i=0;A[i]!='\0';i++)
    {
        if(!(A[i]>=65 && A[i]<=90) && !(A[i]>=92 && A[i]<=122) && !(A[i])>=48 && A[i]<=57)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int main()
{
    char A[]="anil321";
    if(validating(A))
    {
        cout<<"Valid string"<<endl;
    }
    else
    {
        cout<<"Invalid string"<<endl;
    }

    return 0;
}