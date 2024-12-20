#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            mp[x]++;
        }
        vector<ll>v;
        for(auto it:mp)
        {
            if(it.second>=k)
            {
                v.push_back(it.first);
            }
        }
        if(v.size()==0) 
        {
            cout<<"-1"<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        ll mx=0,l=v[0],left=v[0],right=v[0];
        for(ll i=1;i<v.size();i++)
        {
            if(v[i]-1==v[i-1])
            {
                if(v[i]-l>mx)
                {
                    left=l;
                    right=v[i];
                    mx=v[i]-l;
                }
            }
            else
            {
                l=v[i];
            }
        }
        cout<<left<<" "<<right<<endl;
    }
}