#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int>mp;
    mp[6]=5;
    mp[7]=6;
    mp[7]=8;  //mp[]= ** this is very acceptable
    mp[3]=9;
    mp[8]=10;
    mp.insert({1,20});
    mp.insert({2,10});
    mp.insert({3,40});
    mp.insert({3,44});
    mp.insert({4,01});
    mp.insert({5,25});
    mp.insert({9,24});

    cout<<mp.at(8)<<endl;
    cout<<endl;

    for(auto it : mp)
        cout<<it.first<<" "<<it.second<<endl;

    cout<<"\n";

    cout<<"Size of Map: "<<mp.size()<<endl;
    cout<<"Maximum Size of Map: "<<mp.max_size()<<endl;

    //mp.clear();
    if(mp.empty())
        cout<<"Empty"<<endl;
    else
        cout<<"Not Empty"<<endl;

    cout<<endl;

    map<string, string>mp1;
    mp1["b"]="415";
    mp1["a"]="425";
    mp1["c"]="435";
    mp1["bd"]="445";
    mp1["1"]="455";
    mp1["ead"]="465";
    mp1["ed"]="475";
    mp1["eard"]="485";
    mp1["aerd"]="495";

    for(auto it1 : mp1)
        cout<<it1.first<<" "<<it1.second<<endl;

}
