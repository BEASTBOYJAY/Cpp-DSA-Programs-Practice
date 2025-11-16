#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int user=0;
    int cpu=0;
    int round;
    cout<<"        ROCK PAPER SCISSORS SHOOT         "<<endl;
    cout<<"enter no. of rounds"<<endl;
    cin>>round;
    int i=0;
    while(i<round){
        cout<<"1) FOR ROCK "<<endl;
        cout<<"2) FOR PAPER "<<endl;
        cout<<"3) FOR SCISSORS "<<endl;
        cin>>user;
        if(user==1)
        {
            cout<<"YOU CHOOSE ROCK"<<endl;
        }
        else if(user==2)
        {
            cout<<"YOU CHOOSE PAPER"<<endl;
        }
        else
        {
            cout<<"YOU CHOOSE SCISSORS"<<endl;
        }
        cpu=rand()%3+1;
        if(cpu==1)
        {
            cout<<"CPU CHOOSE ROCK"<<endl;
        }
        else if(cpu==2)
        {
            cout<<"CPU CHOOSE PAPER"<<endl;
        }
        else
        {
            cout<<"CPU CHOOSE SCISSORS"<<endl;
        }
        // for tie
        if(user==cpu)
        {
            cout<<"-------------GAME TIE---------------"<<endl;
        }
        // for rock
        if (user==1)
        {
            if(cpu==2)
            {
                cout<<"YOU LOSE!!!"<<endl;
            }
            if (cpu==3)
            {
                cout<<"YOU WIN!!!"<<endl;
            }
        }
        // for paper 
        else if (user==2)
        {
            if(cpu==1)
            {
                cout<<"YOU WIN!!!"<<endl;
            }
            if(cpu==3)
            {
                cout<<"YOU LOSE!!!"<<endl;
            }
        }
        // for scissor
        else if (user==3)
        {
            if(cpu==1)
            {
                cout<<"YOU LOSE!!!"<<endl;
            }
            if(cpu==2)
            {
                cout<<"YOU WIN!!!"<<endl;
            }
        }i++;
    }
    return 0;
}
