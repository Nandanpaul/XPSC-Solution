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
        vector<ll>v(n),a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            a[i]=v[i];
        }
        sort(a.begin(),a.end());
        bool flag=true;

        while(flag)
        {
            flag=false;
            for(ll i=1;i<n-1;i++)
            {
                if(v[i-1]<v[i] && v[i]>v[i+1])
                {
                    swap(v[i],v[i+1]);
                    flag=true;
                }
            }
        }

        if(v==a) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
