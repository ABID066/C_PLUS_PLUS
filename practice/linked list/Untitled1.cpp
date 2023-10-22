#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;

};

int main()
{
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;
    a=(struct Node*)malloc(sizeof(struct Node));
    b=(struct Node*)malloc(sizeof(struct Node));
    c=(struct Node*)malloc(sizeof(struct Node));

    a->data = 10;
    b->data = 20;
    c->data = 30;

    c->next = b;
    b->next = a;
    a->next = NULL;

    while(c!= NULL)
    {
        cout<<c->data<<endl;
        c=c->next;

    }
}
