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
        ll n,m;
        cin>>n>>m;
        ll point=0,pt=0,ps=0;
        for(ll i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            ll diff=a-pt;
            if(ps==b)
            {
                point+=((diff/2)*2);
            }
            else
            {
                point+=(1+(((diff-1)/2)*2));
            }
            pt=a,ps=b;
            if(i==n-1)
            {
                point+=m-pt;
            }
        }
        cout<<point<<endl;
    }
}