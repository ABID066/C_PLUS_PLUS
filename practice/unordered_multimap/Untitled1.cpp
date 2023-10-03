#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multimap <int,int>umlp;
    umlp.insert({4,45});
    umlp.insert({1,12});
    umlp.insert({2,75});
    umlp.insert({3,14});
    umlp.insert({4,78});
    umlp.insert({5,78});
    umlp.insert({6,2541});
    umlp.insert({7,1212});
    umlp.insert({8,4145});
    umlp.insert({5,4455});
    umlp.insert({46,4745});
    umlp.insert({7,5445});
    umlp.insert({44,105});
    umlp.insert({4,425});

    for(auto it : umlp)
        cout<<it.first<<" "<<it.second<<endl;

    cout<<endl;

    cout<<umlp.bucket_count()<<"\n"<<endl;     //number of buckets in this set
    cout<<umlp.bucket(44)<<"\n"<<endl;         //which (number) bucket has the element(44)
    cout<<umlp.bucket_size(10)<<"\n"<<endl;    //how many elements are in the 10th bucket
}
