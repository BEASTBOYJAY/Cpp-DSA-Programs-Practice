#include <iostream>
using namespace std;
// ******count number of vowels and consonants in a string********


// int main()
// {
//     char A[] = "How are You";
//     int vcount = 0;
//     int ccount = 0;

//     for (int i = 0; A[i] != '\0'; i++)
//     {
//         if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' ||
//          A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U')
//         {
//             vcount++;
//         }

//         else if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 92 && A[i] <= 122))
//         {
//             ccount++;
//         }
//     }
//     cout<<"number of vowles are "<<vcount<<endl;
//     cout<<"number of consonants are " <<ccount<<endl;
//     return 0;
// }

// *******count number of words in a string********

int main()
{
    char A[]="how are you";
    int words=1;
    for(int i=0;A[i]!='\0';i++)
    {
        if(A[i]==' '&& A[i-1]!=' ')
        {
            words++;
        }
    }

    cout<<"number of word in a string "<<words<<endl;
}





