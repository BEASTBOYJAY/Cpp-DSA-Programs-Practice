#include <iostream>
using namespace std;
int main(){
    int num,orignal,rem,res=0;
    cout<<"enter any three digit no. u like:";
    cin>>num;
    orignal=num;
    while(orignal!=0){
        rem=orignal%10;
        res+=rem*rem*rem;
        orignal/=10;
    }
    if(res==num){
        cout<<"the number is amstrong no.";
    }
    else{
        cout<<"the number is not amstrong no.";
    }
    return 0;
}