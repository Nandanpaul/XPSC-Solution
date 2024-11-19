#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++) 
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll total=b;
        for(auto s:v)
        {
            ll c=min(s+1,a)-1;
            total+=c;
        }
        cout<<total<<endl;
        
    }
}