#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=100,y=200,z=101;

    int *p1, *p2, *p3;

    p1=&x;
    p2=&y;
    p3=&z;

    cout<<p1<<endl;
    cout<<*p2<<endl;
    cout<<p3<<endl;

    //malloc, calloc, free, realloc

    int *ptr, *ptr1;

    ptr =(int *)malloc(5*sizeof(int));

    ptr1 =(int *)calloc(5, sizeof(int));

    free(ptr);

    ptr1 = (int *)realloc(ptr1, 50);


    //pointer with array
    cout<<endl;
    cout<<endl;

    int sum, a[5]={1,2,3,4,5};

    for(int i=0; i<5; i++)
    {
        cout<<&a[i]<<endl;
        sum=sum+*(a+i) ;
    }
    cout<<"Address of a: "<<a<<endl;
    cout<<"Sum: "<<sum<<endl;

     int *pp=&a[3];
     cout<<*pp<<endl;
     cout<<pp<<endl;

     cout<<*(pp+1)<<endl;
     cout<<(pp+1)<<endl;
}
