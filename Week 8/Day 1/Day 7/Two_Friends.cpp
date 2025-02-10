#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n+1);
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll ans=3;
        for(ll i=1;i<=n;i++)
        {
            if(i==a[a[i]])
            {
                ans=2;
                break;
            }
        }
        cout<<ans<<endl;
    }
}