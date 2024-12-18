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
	    vector<ll>v;
	    for(ll i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    ll mx=0;
	    vector<ll>tim(n,0);
	    for(ll i=n-1;i>=0;i--)
	    {
	        if(v[i]<mx)
	        {
	            tim[i]=tim[i+1]+1;
	        }
	        else
	        {
	            tim[i]=0;
	        }
	        mx=max(v[i],mx);
	    }
	    ll result=*max_element(tim.begin(),tim.end());
	    cout<<result<<endl;
	}

}
