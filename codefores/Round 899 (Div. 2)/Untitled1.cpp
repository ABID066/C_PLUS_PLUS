#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int ans=1;
        for(int i=0; i<n; i++)
        {
            if(a[i]==ans)
                ans=a[i]+1;
            if(i==n-1)
                break;
            ans++;
       } cout<<ans<<endl;

    }
}
