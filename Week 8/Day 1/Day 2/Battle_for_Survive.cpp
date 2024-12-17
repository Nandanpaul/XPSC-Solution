#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll sum=0;
        for(ll i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            if(i<=n-2)
            {
                sum+=x;
            }
            else if(i==n-1)
            {
                sum-=x;
            }
            else
            {
                sum+=x;
            }
        }
        cout<<sum<<endl;
    }
}