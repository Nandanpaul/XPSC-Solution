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
        set<ll>st;
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            st.insert(x);
        }
        ll x;
        cin>>x;
        auto it0 = st.begin();               
        auto it1 = prev(st.end());            

        ll mn = *it0;
        ll mx = *it1;

        if(mn<=x && mx>=x) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }

} 
   