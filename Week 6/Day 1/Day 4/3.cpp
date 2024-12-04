#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,x;
	    cin>>n>>x;
	    vector<pair<ll,ll>>v(n);
	    for(ll i=0;i<n;i++)
	    {
	        cin>>v[i].first;
	    }
	    for(ll i=0;i<n;i++)
	    {
	        cin>>v[i].second;
	    }
	    ll type=0;
	    vector<ll>total;
	    for(auto val:v)
	    {
	        auto value=val.first;
	        auto coin_ache=val.second;
	        
	        ll sum=0;
	        
	        sum=(value*coin_ache);
	        
	        total.push_back(sum);
	        
	    }
	    sort(total.begin(),total.end(),greater<ll>());
	    int s=x;
	    for(ll i=0;i<n;i++)
	    {
	        if(s>0)
	        {
	            s-=total[i];
	            type++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    if(s>0)
	    {
	        cout<<"-1"<<endl;
	    }
	    else
	    {
	        cout<<type<<endl;
	    }
	}
}
