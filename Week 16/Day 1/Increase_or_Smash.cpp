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
        set<ll>s;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            s.insert(x);
        }

        ll sum=0;
        sum=(s.size()*2) - 1;

        cout<<sum<<endl;
        }
}