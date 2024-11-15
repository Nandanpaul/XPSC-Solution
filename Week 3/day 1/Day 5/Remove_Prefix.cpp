#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
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
        // ll p=LLONG_MAX ;
        vector<bool>vec(n+1,false);
        ll r=n-1,distinct=0;
        while(r>=0)
        {
            if(vec[v[r]]==false)
            {
                vec[v[r]]=true;
                distinct++;
            }
            else
            {
                break;
            }
            r--;
        }
        cout<<(n-distinct)<<endl;
    }
}