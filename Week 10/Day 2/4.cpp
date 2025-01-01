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
	    vector<ll>v(n);
	    for(ll i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    ll present=v[0];
	    sort(v.begin(),v.end());
	    auto it=find(v.begin(),v.end(),present);
	    ll d=1,u=1e6;
	    ll now=it-v.begin();
	    if (now<n-1)
	    {
            ll r = v[now+1];
            u = min(u,(present+r)/2);
        }
         if (now>0) 
         {
            ll l = v[now-1];
            d = max(d,(present+l+1)/2);
        }
        ll sum = max(0LL, u - d + 1);
        cout << sum << endl;
	}
	

}
