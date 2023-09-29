
#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue <int> pq, pq1;
    pq.push(1);
    pq.push(4);
    pq.push(3);
    pq.push(2);
    cout<<pq.top()<<endl;
    cout<<pq.size()<<"\n"<<endl;

    pq1.emplace(5);
    pq1.emplace(7);
    pq1.emplace(9);
    pq1.emplace(8);
    pq.swap(pq1);

    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
    cout<<endl;
    cout<<endl;

    priority_queue <int, vector<int>, greater<int>>pq2;
    pq2.push(11);
    pq2.push(19);
    pq2.push(13);
    pq2.push(18);
    pq2.push(14);
    while(!pq2.empty())
    {
        cout<<pq2.top()<<endl;
        pq2.pop();
    }
}
