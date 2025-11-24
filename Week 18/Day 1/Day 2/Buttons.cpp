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
        ll a=0,b=0,c=0;
        for(ll i=0;i<3;i++)
        {
            ll x;
            cin>>x;
            if(i==0) a=x;
            else if(i==1) b=x;
            else c=x;
        }
        if(c%2!=0)
        {
            if(b>a) cout<<"Second"<<endl;
            else cout<<"First"<<endl;
        }
        else
        {
            if(b<a) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }

} 
   