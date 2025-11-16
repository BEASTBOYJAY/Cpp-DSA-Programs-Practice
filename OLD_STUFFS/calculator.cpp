#include <iostream>
using namespace std;
int main(){
    int a,b,z=0;
    cout<<"enter 1st no.";
    cin>>a;
    cout<<"enter 2nd no.";
    cin>>b;
    int cha;
    cout<<"1 for addittion , 2 for subtraction , 3 for multiplication , 4 for divide";
    cin>>cha;
    switch(cha){
        case 1:
        {
        z=a+b;
        cout<<"two numbers have been added:\n"<<z;
        break;}
        case 2:
        {
        z=a-b;
        cout<<"two numbers have been subtracted:\n"<<z;
        break;}
        case 3:
        {
        z=a*b;
        cout<<"two numbers have been multiplied:\n"<<z;
        break;}
        case 4:{
        z=a/b;
        cout<<"two numbers have been divided:\n"<<z;
        break;}
        default:
        cout<<"enter no.between 1-4";
        break;
    }
    return 0;
}