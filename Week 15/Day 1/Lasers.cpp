#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        for(ll i=0;i<n;i++)
        {
            int x;
            cin>>x;
        }
        for(ll i=0;i<m;i++)
        {
            int x;
            cin>>x;
        }
        ll ans=0;
        ans=n+m;
        cout<<ans<<endl;
    }
}