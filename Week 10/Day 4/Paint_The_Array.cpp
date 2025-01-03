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
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll gd1=0,gd2=0,ans=0;
        bool flag=true;
        for(ll i=0;i<n;i+=2)
        {
            gd1= __gcd(v[i],gd1);
        }
        for(ll i=1;i<n;i+=2)
        {
            gd2= __gcd(v[i],gd2);
        }
        for(ll i=0;i<n;i+=2)
        {
            if(v[i]%gd2==0)
            {
                flag=false;
            }
        }
        if(flag)
        {
            cout<<gd2<<endl;
        }
        else
        {
            flag=true;
            for(ll i=1;i<n;i+=2)
            {
                if(v[i]%gd1==0)
                {
                    flag=false;
                }
            }
            if(flag)
            {
                cout<<gd1<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }
    }
}