#include <iostream>
#include <string>
using namespace std;
void swap(int &x,int &y){
    int z=x;
    x=y;
    y=z;    
}
int main(){
    int a,b;
    cout<<"1st no.:"<<"\n";
    cin>>a;
    cout<<"2nd no.:"<<"\n";
    cin>>b;

    cout<<"before swap:"<<"\n";
    cout<<a<<b<<"\n";
    swap(a,b);
    cout<<"after swap:"<<"\n";
    cout<<a<<b<<"\n";
    return 0;
}