#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *previous;

    node(int val)
    {
        data = val;
        next = NULL;
        previous = NULL;
    }
};

void inserAthead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->previous = n;
    }
    head = n;
}


void insertAttail(node *&head, int val)
{
    if (head == NULL)
    {
        inserAthead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->previous = temp;
}


void display(node *&head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteAthead(node* &head)
{
    node* todelete=head;
    head=head->next;
    head->previous=NULL;

    delete todelete;
}

void deletion(node *&head,int pos)
{

    if(pos==1)
    {
        deleteAthead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos)
    {
        temp=temp->next;
        count++;
    }
    temp->previous->next=temp->next;
    if(temp->next!=NULL)
    {
        temp->next->previous=temp->previous;
    }
    delete temp;
}

int main()
{
    node *head = NULL;
    insertAttail(head, 1);
    insertAttail(head, 2);
    insertAttail(head, 3);
    insertAttail(head, 4);
    insertAttail(head, 5);

    display(head);

    inserAthead(head, 6);
    inserAthead(head, 7);

    display(head);

    deletion(head,7);
    
    display(head);

    deletion(head,1);

    display(head);
    return 0;
}