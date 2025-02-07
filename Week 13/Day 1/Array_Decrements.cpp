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
        set<ll>s;
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        ll zero=INT_MIN;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(b[i]>a[i])
            {
                flag=false;
                break;
            }
            else if(b[i]==0)
            {
                zero=max(zero,a[i]);
            }
            else
            {
                s.insert(a[i]-b[i]);
            }
        }
        if(flag)
        {
            if(s.size()==0)
            {
                cout<<"YES"<<endl;
            }
            else if(s.size()==1 && *s.begin()>=zero)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}