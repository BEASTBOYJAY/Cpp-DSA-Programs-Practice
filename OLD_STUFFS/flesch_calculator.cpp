#include <iostream>
using namespace std;
///////// flesch code//////
    void flesch(float a,float b, float c)
    {
    float ans;
    float j=a/b;
    float i=c/a;
    ans=206.835-1.015*j-84.6*i;
    cout<<"flesch no. is:"<< ans<<endl;
    }
int main()
{
    float x;
    float y;
    float z;
    cout<<"input the total no. of words "<<endl;
    cin>>x;
    cout<<"input the total no. of sentences "<<endl;
    cin>>y;
    cout<<"input the no. of syllabes "<<endl;
    cin>>z;
    flesch(x,y,z);

    return 0;
}