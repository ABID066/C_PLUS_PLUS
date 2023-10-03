#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multiset <int>ums;
    ums.insert(1);
    ums.insert(1);
    ums.insert(74);
    ums.insert(12);
    ums.insert(2);
    ums.insert(2);
    ums.insert(71412);
    ums.insert(71);
    ums.insert(71);
    ums.insert(74);
    ums.insert(7);
    ums.insert(4);
    ums.insert(6);


    for(auto it : ums)
        cout<<it<<" ";
    cout<<endl;
    cout<<endl;

    cout<<ums.bucket_count()<<"\n"<<endl;     //number of buckets in this set
    cout<<ums.bucket(47)<<"\n"<<endl;         //which (number) bucket has the element(47)
    cout<<ums.bucket_size(6)<<"\n"<<endl;     //how many elements are in the 6th bucket

}
