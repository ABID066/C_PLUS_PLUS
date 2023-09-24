#include<bits/stdc++.h>
using namespace std;
int main()
 {
    list<int>li={1,6,4,5,6,45,54,45,5,5,5,5,44};
    list<int>li2={5,5,4,405,565,465,45,5,44};
    li.merge(li2);
    li.sort();
    li.unique();


    for(auto fd : li)
        cout<<fd<<" "<<endl;
    return 0;
}

