#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll LCM(ll p,ll q)
{
    return ((p/ __gcd(p,q))*q);
}
int main()
{
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll x=(n/a)*p,y=(n/b)*q,overlap=(n/LCM(a,b));
    ll ans=((x+y)-(overlap*(p+q)))+(overlap*max(p,q));
    cout<<ans<<endl;
}