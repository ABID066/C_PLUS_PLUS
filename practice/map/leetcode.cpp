#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v= {3,3,1,3,1,2,1,11,11,11,99, 99, 99};
    map<int, int>mp;

    for(int i=0; i<v.size(); i++)
    {
        int x= v[i];
        mp[x]++;
    }
    for(auto it : mp)
    {
        int y= it.second;
        if(y==1)
            cout<<it.first;
    }
}
