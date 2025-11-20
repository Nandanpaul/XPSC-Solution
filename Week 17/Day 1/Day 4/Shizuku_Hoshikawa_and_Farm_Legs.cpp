#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        if((n+2)%4==0)
        {
            ans=(n+2)/4;
            cout<<ans<<endl;
        }
        else if(n%2!=0)
        {
            cout<<ans<<endl;
        }
        else
        {
            ans=(n/4)+1;
            cout<<ans<<endl;
        }
        
    }
}