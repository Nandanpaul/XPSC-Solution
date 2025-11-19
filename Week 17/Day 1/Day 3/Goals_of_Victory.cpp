#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;
        ll ans=0;
        for(ll i=0;i<n-1;i++)
        {
            ll x;
            cin>>x;
            ans=ans+x;
        }

        ans=ans*(-1);

        cout<<ans<<endl;

        

    }
}