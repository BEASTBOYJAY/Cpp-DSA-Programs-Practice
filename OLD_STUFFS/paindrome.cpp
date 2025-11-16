#include <iostream>
using namespace std;
int main(){
    int number,x=0;
    cout<<"enter any number u like:"<<"\n";
    cin>>number;
    while(number>0){
        int rem=number%10;
        x=(x*10) +rem;
        number=number/10;
    }
    cout<<"number be:"<<x;
    return 0;
    }