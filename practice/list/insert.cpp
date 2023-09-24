
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li{10,11,12,13,14,15};
    list<int>:: iterator abd, abd1;
    abd=li.begin();
    abd1=li.begin();
    advance(abd, 5);
    li.insert(abd, 500);
    for(auto abd : li)
        cout<<abd<<" "<<endl;
    cout<<endl;


    advance(abd, -2);
    advance(abd1,-1);
    li.erase(abd, abd1);
    for(auto abd : li)
        cout<<abd<<" "<<endl;
}
