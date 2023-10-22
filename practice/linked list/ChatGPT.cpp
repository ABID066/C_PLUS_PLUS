#include<bits/stdc++.h>
using namespace std;

struct Node *createLinkedList(int arr[], int size);
void insertLinkedList(struct Node *head, int data);
void printList(struct Node *head);

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
    int a[]= {5,10,847};
    struct Node *head;
    head = createLinkedList(a, 3);
    printList(head);
    insertLinkedList(head, 454);
}
void insertLinkedList(struct Node *head, int data)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;

    struct Node* newheadd= temp;
   // struct Node* newcurr= newheadd;
    cout<<endl;
    cout<<endl;
    printList(newheadd);
}
void printList(struct Node *head)
{
    struct Node* current = head;
    while(current != NULL)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
}
