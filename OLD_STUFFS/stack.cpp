#include<iostream>
using namespace std;
#define n 100
class stack
{
    int *arr;
    int top;
    public:
    stack()
    {
        arr=new int [n];
        top=-1;
    }

    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"can not push"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop()
    {   
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        top--;
    }

    void Top()
    {   
        if(top==-1)
        {
            cout<<"empty stack"<<endl;
            // return -1; 
        }
        else
        {
            // return arr[top];
            cout<< arr[top]<<endl;
        }
        
    }

    bool Empty()
    {
        return top==-1;
    }
};

int main()
{

    stack st;
    st.push(11);
    st.push(22);
    st.push(33);
    st.Top();
    st.pop();
    st.Top();
    st.pop();
    st.pop();
    cout<<st.Empty()<<endl;

    return 0;
}