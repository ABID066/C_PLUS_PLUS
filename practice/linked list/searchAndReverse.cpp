#include<bits/stdc++.h>
using namespace std;

struct Node* createLinkedList(int arr[], int size);
int searchInLinkedList(struct Node *head, int v);
void reverseLinkedList(struct Node *head);

struct Node
{
    int data;
    struct Node *next;

};

struct Node* createLinkedList(int arr[], int size)
{
    struct Node *head =NULL, *temp=NULL, *current=NULL;
    for(int i=0; i<size; i++)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data =arr[i];
        temp->next =NULL;
        if(head==NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current=current->next;
        }

    }
    return head;
}

int main()
{
    int a[]= {5,10,15,45,84,54,804,7};

    struct Node *head;
    head = createLinkedList(a, 8);

    struct Node *newhead=head;
    struct Node *newhead1=head;
    struct Node *newhead2=head;

    //print the array as linked list
    while(head != NULL)
    {
        cout<<head->data<<endl;
        head =head->next;
    }
    cout<<endl;
    cout<<endl;

    //search in linked list
    int in =searchInLinkedList(newhead, 54);
    cout<<"Index: "<<in<<endl;

    cout<<endl;
    cout<<endl;

    //reverse the linked list and print
    reverseLinkedList(newhead1);


}


int searchInLinkedList(struct Node *head, int v)
{
    int index=1;
    while(head != NULL)
    {
        if(head->data==v)
        {
            return index;
        }
        index++;
        head=head->next;

    }
    return -1;
}
void reverseLinkedList(struct Node *head)
{
    struct Node *pre=NULL, *curr=head, *nex=NULL;
    while(curr != NULL)
    {
       nex=curr->next;
       curr->next=pre;
       pre=curr;
       curr=nex;
    }
    head=pre;
    while(head != NULL)
    {
        cout<<head->data<<endl;
        head =head->next;
    }
}
