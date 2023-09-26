
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s;
    int a=0, b=0;
    cin>>s;
    int l=s.length();
    int odd= count(s.begin(), s.end(), '1');

    if(l==1 && odd==1)
        cout<<s;
    else
    {
        for(a=0; a<odd-1; a++)
            s1+="1";
        for(b=odd; b<l; b++)
            s1+="0";
        s1+="1";
    }

    cout<<s1;

}
