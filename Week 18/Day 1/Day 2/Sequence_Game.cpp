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
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        vector<ll>a;
        a.push_back(v[0]);
        for(ll i=1;i<n;i++)
        {
            if(v[i-1]>v[i])
            {
                a.push_back(v[i]);
                a.push_back(v[i]);
            }
            else
            {
                a.push_back(v[i]);
            }
        }
        cout<<a.size()<<endl;
        for(ll i=0;i<a.size();i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }

} 
   