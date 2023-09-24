#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a, a+n);
        a[0]+=1;
        long long int ans=1;
        for(int j=0; j<n; j++)
            ans*=a[j];
        cout<<ans<<endl;
    }

}
