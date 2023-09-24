#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq= {1,2,3,454,45,78,40,450,4};
    dq.push_front(10);

    for(int i=0; i<dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    cout<<endl;

    dq.pop_back();
    dq.pop_front();
    for(int i=0; i<dq.size(); i++)
    {
       cout<<dq[i]<<" ";
    }
    cout<<endl;
    cout<<endl;

    deque<int>::iterator abd, abd1,abd2;
    abd=dq.begin()+1;
    abd2=dq.begin()+3;
    dq.erase(abd, abd2);
    for(int i=0; i<dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }
     cout<<endl;
    cout<<endl;

    abd1=dq.begin()+4;
    dq.insert(abd1, 3,500);
    cout<<endl;
    cout<<endl; for(int i=0; i<dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }cout<<endl;
    cout<<endl;

}
