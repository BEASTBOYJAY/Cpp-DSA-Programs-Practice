#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a no. to check the even:";
    cin>>number;
    if(number % 2==0){
        cout<<"your number is even:"<<number;
    }
    else{
        cout<<"your no. is not even ";
    }
    return 0;
}