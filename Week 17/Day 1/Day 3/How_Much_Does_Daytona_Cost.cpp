#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        bool flag=false;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x==k) flag=true;
        }

        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
}