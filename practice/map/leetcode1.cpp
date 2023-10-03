#include<bits/stdc++.h>
using namespace std;

class leet
{
public:
    int check (vector<int> v )
    {
        map<int, int>mp;
        int an;
        for(int i=0; i<v.size(); i++)
        {
            int x= v[i];
            mp[x]++;
        }
        for(auto it : mp)
        {
            int y= it.second;
            if(y==1){
                an=it.first;
                break;}
        }
        return an;
    }

};


int main()
{
    leet v;
    vector<int> vv= {3,3,1,3,1,2,1,11,11,11,99, 99, 99};
    cout<<v.check(vv);


}

