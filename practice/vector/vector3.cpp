#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{40,45,46,47,49};

    vector<int>::iterator it;
    it=v.begin();
    cout<<*it<<endl;
    cout<<endl;

    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<endl;
    }

}
