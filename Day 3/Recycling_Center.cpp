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
        ll n,c;
        cin>>n>>c;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end(),greater<ll>());

        ll coin=0;
        ll j=0;
        for(ll i=0;i<n;i++)
        {
            ll mul=1LL << (j);
            ll value=v[i]*mul;
            if(value<=c)
            {
                j++;
            }
            else
            {
                coin++;
            }
        }
        cout<<coin<<endl;

    }
}