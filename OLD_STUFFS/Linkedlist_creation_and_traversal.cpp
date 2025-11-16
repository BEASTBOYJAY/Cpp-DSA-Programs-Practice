#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAttail(node* &head,int val)
{
    node* n=new node(val);


    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=n;
}

void display(node* head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<"->"<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"-> NULL"<<endl;
}

void insertAthead(node* &head,int val)
{
    node*n=new node (val);
    n->next=head;
    head=n;
}
int main()
{

    node* head=NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    display(head);
    insertAthead(head,5);
    display(head);
    
    return 0;
}