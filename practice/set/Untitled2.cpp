#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <int, greater<int>> s= {1,5,20,40,98,4,5,9,11,15,445,45,4};
    set <int, greater<int>> s1= {42,4,4,5,57,82,03,23,59,74,810,22};
    set<int, greater<int>>s2;
    s.emplace(41);
    s.emplace(42); //insert value in the set
    s.emplace(43);
    for(auto it : s)
        cout<<it<<" "; //print S set

    cout<<endl;
    cout<<endl;

    int l=9;
    auto it1=s.lower_bound(l);
    if(it1==s.end())
        cout<<"The element is larger to the Greater Element of the SET"<<endl;
    else
        cout<<"The lower bound of "<<l<<" is "<<*it1<<endl;

    int ll=15;
    auto it2=s.upper_bound(ll);
    if(it2==s.end())
        cout<<"The element is larger or equal to the Greater Element of the SET"<<endl;
    else
        cout<<"The upper bound of "<<ll<<" is "<<*it2<<endl;

    cout<<"\n";


    for(auto it3 : s1)
        cout<<it3<<" ";

    cout<<"\n";
    s2=s ;        //copy set
    s1.swap(s2); //swapping the sets
    for(auto it4 : s1)
        cout<<it4<<" ";




    cout<<"\n";
}
