#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map <int,int>ump;
    ump.insert({4,45});
    ump[2]=444;
    ump[1]=4;
    ump[5]=78;
    ump[45]=41;
    ump[44]=9;
    ump[21]=75;

    for(auto it : ump)
        cout<<it.first<<" "<<it.second<<endl;

    cout<<endl;

    cout<<ump.bucket_count()<<"\n"<<endl;     //number of buckets in this set
    cout<<ump.bucket(44)<<"\n"<<endl;         //which (number) bucket has the element(44)
    cout<<ump.bucket_size(10)<<"\n"<<endl;    //how many elements are in the 10th bucket
}
