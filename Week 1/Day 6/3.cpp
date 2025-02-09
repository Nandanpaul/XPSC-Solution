#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll b;
        cin>>b;
        bool flag=true;
        ll last=LLONG_MIN;
        for(ll i=0;i<n;i++)
        {
            ll t1=a[i];
            ll t2=b-a[i];

            if(max(t1,t2)<last)
            {
                flag=false;
                break;
            }

            if(min(t1,t2)>=last)
            {
                last=min(t1,t2);
            }
            else
            {
                last=max(t1,t2);
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
