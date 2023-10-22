#include<bits/stdc++.h>
using namespace std;

struct Node *createLinkedList(int arr[], int size);
struct Node *insertAtBeginingLinkedList(struct Node *head, int data);
void printList(struct Node *head);
struct Node *insertAtEndLinkedList(struct Node *head, int data);
void justInsertAtAnyPosition(struct Node *head, int position, int data);
void deleteOperation(struct Node *head, int data);

struct Node
{
    int data;
    struct Node *next;

};

struct Node * createLinkedList(int arr[], int size)
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
    int a[]= {5,10,847,445,454,74,36};
    struct Node *head;
    head = createLinkedList(a, 7);
    printList(head);
    struct Node *add=insertAtBeginingLinkedList(head, 454);
    struct Node *add1=insertAtEndLinkedList(add, 51);
    justInsertAtAnyPosition(add1, 4, 7488);
    deleteOperation(add1, 5);
}
void deleteOperation(struct Node *head, int data)
{
    struct Node *dummyhead=(struct Node*)malloc(sizeof(struct Node));
    dummyhead->next=head;
    struct Node *temp=dummyhead;
    while(temp->next!= NULL)
    {
        if(temp->next->data==data)
        {
            temp->next=temp->next->next;
            break;
        }
        else
            temp=temp->next;
    }
    printList(dummyhead->next);

}
struct Node *insertAtBeginingLinkedList(struct Node *head, int data)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;

    struct Node* newheadd= temp;

    printList(newheadd);

    return newheadd;
}
void printList(struct Node *head)
{
    struct Node* current = head;
    while(current != NULL)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
    cout<<endl;
}
struct Node *insertAtEndLinkedList(struct Node *head, int data)
{
    struct Node *current = head;
    while(current->next!= NULL)
    {
        current=current->next;
    }
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;


    current->next=temp;
    printList(head);
    return head;
}
void justInsertAtAnyPosition(struct Node *head, int position, int data)
{
    struct Node *temp = head;
    int count=0;

    while(temp!= NULL)
    {
        count++;
        if(position==count)
        {
            struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
            newnode->data=data;
            newnode->next=temp->next;
            temp->next=newnode;
        }
        temp=temp->next;
    }
    printList(head);
}
