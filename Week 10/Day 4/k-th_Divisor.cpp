#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if((n/i)!=i)
            {
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<k)
    {
        cout<<"-1";
    }
    else
    {
        cout<<v[k-1];
    }
}