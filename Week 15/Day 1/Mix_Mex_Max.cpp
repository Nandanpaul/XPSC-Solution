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
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll maxValue = *max_element(v.begin(), v.end());
        if(maxValue==-1)
        {
            cout<<"Yes"<<endl;
        }
        else if(maxValue==0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            ll one=0;
            ll another=0;
            for(ll i=0;i<n;i++)
            {
                if(v[i]==-1)
                {
                    one++;
                }
                else if(v[i]==maxValue)
                {
                    another++;
                }
            }
            if(n==(another+one))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
}
