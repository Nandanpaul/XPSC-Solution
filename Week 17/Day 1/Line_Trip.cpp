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
        ll n,x;
        cin>>n>>x;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        //cout<<"V[3]->"<<v[n-1]<<" "<<"X->"<<x<<endl;
        ll mx=(abs(x-v[n-1])*2);
        //cout<<"Max->"<<mx<<" ";
        mx=max(mx,v[0]);
        if(n>1)
        {
            for(ll i=0;i<n-1;i++)
            {
                mx=max(mx,abs(v[i+1]-v[i]));
            }
            cout<<mx<<endl;
        }
        else
        {
            cout<<mx<<endl;
        }
       
    }
}