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
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x==0)
            {
                sum++;
            }
            else
            {
                sum+=x;
            }
        }
        cout<<sum<<endl;
    }
}