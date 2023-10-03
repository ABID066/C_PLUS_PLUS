#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap <int,int> mlp;
    mlp.insert({1,10});
    mlp.insert({2,20});
    mlp.insert({20,20});
    mlp.insert({3,20});
    mlp.insert({3,310});
    mlp.insert({3,30});
    mlp.insert({4,4000});
    mlp.insert({4,450});
    mlp.insert({5,50});
    mlp.insert({6,60});
    mlp.insert({7,70});
    mlp.insert({8,80});


    auto it1=mlp.begin();
    advance(it1, 1);
    mlp.erase(it1);
    auto it2=mlp.begin();
    advance(it2, 1);
    mlp.erase(it2);

    for(auto it : mlp)
        cout<<it.first<<" "<<it.second<<endl;

    cout<<"\n"<<mlp.count(3)<<endl;

    cout<<"\n";

    auto it3=mlp.find(7 );
    if(it3!=mlp.end())
        cout<<"FOUND"<<endl;

    auto it4=mlp.lower_bound(3);
    cout<<"Lower_bound: "<<(*it4).first<<" "<<(*it4).second<<endl;

    auto it5=mlp.upper_bound(3);
    cout<<"Upper_bound: "<<(*it5).first<<" "<<(*it5).second<<endl;
}
