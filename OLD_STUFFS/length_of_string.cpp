#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str[]="welcome";
    int i=0; 
    while (str[i]!='\0')
    {
        i++;
    }
    cout<<"length of string "<<i;

    return 0;

}