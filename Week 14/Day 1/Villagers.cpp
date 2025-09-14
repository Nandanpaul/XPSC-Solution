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
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        
        sort(v.begin(),v.end(),greater<ll>());

        ll sum=0;
        for(ll i=0;i<n;i+=2)
        {
            sum+=v[i];
        }

        cout<<sum<<endl;
    }
}