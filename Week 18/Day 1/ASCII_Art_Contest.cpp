#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    vector<ll>v;
    ll mx=LLONG_MIN,mn=LLONG_MAX;
    for(ll i=0;i<3;i++)
    {
        ll x;
        cin>>x;
        mx=max(x,mx);
        mn=min(x,mn);
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(mx-mn>=10)
    {
        cout<<"check again";
    }
    else
    {
        cout<<"final"<<" "<<v[1];
    }

} 
   