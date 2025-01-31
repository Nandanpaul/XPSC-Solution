#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x;
    cin>>x;
    ll cnt=0;
    for(ll k=1;k*k<=x;k++)
    {
        if(x%k==0)
        {
            cnt++;
            if(k!=x/k) cnt++;
        }
        
    }
    cout<<cnt;
}