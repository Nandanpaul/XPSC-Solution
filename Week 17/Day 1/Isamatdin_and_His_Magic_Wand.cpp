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
        ll n,even=0,odd=0;
        cin>>n;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            v.push_back(x);
        }
        if(even>0 && odd>0)
        {
            sort(v.begin(),v.end());
            for(auto i:v)
            {
                cout<<i<<" ";
            }
        }
        else
        {
            for(auto i:v)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}