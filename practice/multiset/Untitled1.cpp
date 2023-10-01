#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int>ms= {2,2,3,3,5,5,6};
    ms.insert(1);
    ms.emplace(1);

    for(auto it : ms)
        cout<<it<<" ";
    cout<<"\n";
    cout<<"Size of the multiset: "<<ms.size()<<endl;
    cout<<"MAXSize of the multiset: "<<ms.max_size()<<endl;



    auto it1=ms.upper_bound(4);
    for(auto it2=it1; it2!=ms.end(); it2++)
    {
        cout<<*it2<<" ";
    }
}
