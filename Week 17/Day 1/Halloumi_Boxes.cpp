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
        ll n,k;
        cin>>n>>k;
        vector<ll>v;
        ll m=LLONG_MIN;
        bool flag=true;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x>=m)
            {
                m=x;
            }
            else
            {
                flag=false;
            }
            v.push_back(x);
        }
        if(flag)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            if(n>1 && k<2)
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
       
    }
}