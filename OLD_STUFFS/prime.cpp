#include <iostream>
using namespace std;
int main(){
    int number,x;
    bool prime=true;
    cout<<"enter any no.:\n";
    cin>>number;
    //for 1 and 0
    if(number==0,number==1){
        prime=false;
    }
    //loop to check the number is prime or not
    for(x=2;x<=number/2;++x){
        if(number%x==0){
                prime=false;
                break;
        }
    }
    if(prime){
        cout<<number<<" is prime no.";
    }
    else{
        cout<<number<<" is not a prime no.";
    }
    return 0;
}