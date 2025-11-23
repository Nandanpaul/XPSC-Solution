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
        for(ll i=0;i<4;i++)
        {
            ll x;
            cin>>x;
            st.insert(x);
        }
        if(st.size()==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

} 
   