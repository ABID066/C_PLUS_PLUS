#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> un;
    un.insert(4);
    un.insert(5);
    un.insert(15);
    un.insert(574);
    un.insert(75);
    un.insert(775);
    un.insert(8);
    un.insert(87);
    un.insert(5);
    un.insert(875);


    for(auto it : un)
        cout<<it<<" ";
    cout<<endl;
    cout<<endl;

    auto it1=un.find(40);
    if(it1==un.end())
        cout<<"NOT Found"<<endl;
    else
        cout<<"FOUND"<<endl;
    cout<<endl;

    auto it2=un.count(5);
    if(it2)
        cout<<"ONE";
    else
        cout<<"None";
    cout<<endl;
    cout<<endl;

    cout<<un.bucket_count()<<"\n"<<endl;  //number of bucket in the set
    cout<<un.bucket(875)<<"\n"<<endl;     //which (number) bucket has the element(875)
    cout<<un.bucket_size(8)<<"\n"<<endl;  ////how many elements are in the 8th bucket

}
