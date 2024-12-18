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
	    ll cost=0;
	    vector<ll>v;
	    for(ll i=0;i<n;i++)
	    {
	        ll x;
	        cin>>x;
	        v.push_back(x);
	    }
	    sort(v.begin(),v.end());
	    ll i=0;
	    for(auto val:v)
	    {
	        if(val-i>=0)
	        {
	            cost+=val-i;
	        }
	        i++;
	    }
	    cout<<cost<<endl;
	}

}
