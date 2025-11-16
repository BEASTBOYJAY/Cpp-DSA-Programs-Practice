#include <iostream>
using namespace std;
int main(){
    bool ships[5][5]={
        {1,0,0,0,0},
        {1,0,1,0,0},
        {0,0,0,0,1},
        {0,1,0,0,1},
        {0,0,0,1,0}
    };
int hits=0;
int numofturns=0;
 while (hits<5){
    int row,column;
    cout<<"selecting cords \n";
    cout<<"choose a row no. 0-4:";
    cin>>row;
    cout<<"choose a column no. 0-4:";
    cin>>column;
    if(ships[row][column]){
        ships[row][column]=0;
        hits++;
        cout<<"hit!!"<<(7-hits)<<"left.\n\n";
    }
    else{
        cout<< "miss\n\n";
    }
    numofturns++;
 }
cout<<"victory!!\n";
cout<<"you won in "<<numofturns;
        }