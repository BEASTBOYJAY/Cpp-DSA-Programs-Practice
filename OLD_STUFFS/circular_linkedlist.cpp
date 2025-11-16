#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void inserAthead(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;
}

void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout<<endl;
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
    while (temp->next != head);
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deleteAthead(node* &head)
{
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
}

void deletion(node* &head,int pos)
{
    if(pos==1)
    {
        deleteAthead(head);
        return;
    }
    node* temp=head;
    int count=2;
    while(count!=pos)
    {
        temp=temp->next;
        count++;
    }

    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}
int main()
{
    node *head = NULL;
    insertAttail(head, 1);
    insertAttail(head, 2);
    insertAttail(head, 3);
    insertAttail(head, 4);
    display(head);
    inserAthead(head, 5);
    display(head);
    deletion(head,4);
    display(head);

    return 0;
}