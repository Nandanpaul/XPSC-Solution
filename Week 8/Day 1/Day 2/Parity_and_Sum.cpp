#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll Max_Odd=INT_MIN;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x%2==0)
            {
                v.push_back(x);
            }
            else if(x>Max_Odd)
            {
                Max_Odd=x;
            }
        }
        sort(v.begin(),v.end());
        if(Max_Odd==INT_MIN || v.empty())
        {
            cout<<"0"<<endl;
            continue;
        }
        ll ans=v.size();
        for(auto a:v)
        {
            if(a<Max_Odd)
            {
                Max_Odd+=a;
            }
            else
            {
                ans+=1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}