#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int>pp,p,p1(10,4555555);
    p.first=10;
    p.second=80;

    pp=make_pair(4564,40);

    cout<<p.first<<" "<<p.second<<endl;
    cout<<pp.first<<" "<<pp.second<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;

    if(pp>=p1)
        cout<<"YES"<<endl;
    else cout<<"NO "<<endl;
}
