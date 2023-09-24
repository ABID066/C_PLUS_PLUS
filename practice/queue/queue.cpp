#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q,q1;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    q1.emplace(10);
    q1.emplace(11);
    q1.emplace(12);
    q1.emplace(13);

    cout<<q.front()<<endl;
    cout<<q1.back()<<endl;

    q.pop();
    cout<<endl;

    while(!q.empty())
    {

        cout<<q.front()<<" "<<endl;
        q.pop();
    }
    cout<<endl;
    cout<<"Size of q: "<<q.size()<<endl;

    if(q1.empty())cout<<"Empty"<<endl;
    else cout<<"q1 is Not Empty"<<endl;





}
