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
	    ll sum=0;
	    ll u=0;
	    for(ll i=0;i<n;i++)
	    {
	        ll x;
	        cin>>x;
	        sum+=x;
	        u+=abs(sum);
	    }
	    cout<<u<<endl;
	}

}
