#include <bits/stdc++.h>
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
	    map<ll,ll>mp;
	    for(ll i=1;i<=n;i++)
	    {
	        ll x;
	        cin>>x;
	        mp[x]=max(mp[x],i);
	    }
	    ll sum=0;
	    for(auto s:mp)
	    {
	        sum+=s.second;
	    }
	    cout<<sum<<endl;
	}

}
