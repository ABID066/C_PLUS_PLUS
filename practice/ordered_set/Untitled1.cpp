#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>,rb_tree_tag,tree_order_statistics_node_update>
int main()
{
    ordered_set s;
    s.insert(10);
    s.insert(11);
    s.insert(12);
    s.insert(13);
    s.insert(14);
    s.insert(15);

    for(auto it : s)cout<<it<<" ";
    cout<<"\n";

    auto it1=s.order_of_key(12);
    cout<<it1<<endl;
    auto it2=s.find_by_order(2);
    cout<<*it2<<endl;
}
