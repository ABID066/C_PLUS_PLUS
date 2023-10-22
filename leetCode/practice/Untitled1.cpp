#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s=0, m=0;
    vector<int>sb;
    vector<vector<int>>v;
    v={{1,2,3,5,4},{7,8,9,1,10}};

    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            s=v[i][j]+s;
        }
        cout<<s<<endl;
        m=std::max(m,s);
        s=0;
    }
 cout<<m;
}
