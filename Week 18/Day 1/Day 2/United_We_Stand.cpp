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
        vector<ll>v,b,c;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        ll mx=*max_element(v.begin(),v.end());
        for(ll i=0;i<n;i++)
        {
            if(v[i]!=mx)
            {
                b.push_back(v[i]);
            }
            else
            {
                c.push_back(v[i]);
            }
        }
        if(b.size()==0 || c.size()==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto x:b) cout<<x<<" ";
            cout<<endl;
            for(auto x:c) cout<<x<<" ";
            cout<<endl;
        }

    }

} 
   