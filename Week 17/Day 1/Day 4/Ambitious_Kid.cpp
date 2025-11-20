#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll ans=LLONG_MAX;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        ans=min(ans,abs(x));
    }
    cout<<ans<<endl;
}