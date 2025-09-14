#include <bits/stdc++.h>
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
        set<ll>s;
        bool flag=true;
        ll k=1;
        while(flag)
        {
            ll w=(10*k)+1;
            if(w>n) 
            {
                flag=false;
                break;
            }
            if(n%w==0)
            {
                s.insert(n/w);
                //cout<<n/w<<" "<<endl;
            }
            k*=10;
        }
        if(s.empty())
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<s.size()<<endl;
            for(auto simple : s)
            {
                cout<<simple<<" ";
            }
            cout<<endl;
        }
    }

   
}
