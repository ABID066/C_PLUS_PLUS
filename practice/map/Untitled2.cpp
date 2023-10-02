#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <int,int, greater<int>>mp, mp1;
    mp[1]=4;
    mp[2]=44;
    mp[3]=45;
    mp[4]=54;
    mp[5]=51;
    mp[6]=78;
    mp[7]=454;
    mp[8]=5;

    mp.erase(4);
    for(auto it : mp)
        cout<<it.first<<" "<<it.second<<endl;

    int cnt= mp.count(10);

    cout<<cnt<<endl;
    auto it1 = mp.find(9);
    if(it1!=mp.end())
        cout<<"FOUND"<<endl;
    else
        cout<<"NOT Found"<<endl;

    int l=4;
    auto it2=mp.lower_bound(l);
    if(it2==mp.end())
        cout<<"The element is larger to the Greater (Smaller because it's reverse) Element of the SET"<<endl;
    else
        cout<<"The lower bound of "<<l<<" is "<<it2->second<<endl;

    int ll=0;
    auto it3=mp.upper_bound(ll);
    if(it3==mp.end())
        cout<<"The element is larger to the Greater (Smaller because it's reverse) Element of the SET"<<endl;
    else
        cout<<"The upper bound of "<<ll<<" is "<<(*it3).second<<endl;
    //copy as set
    //swapping as set
}
