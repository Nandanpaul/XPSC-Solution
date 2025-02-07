#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long 
using namespace std;
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<ll>x(q);
        for(int i=0;i<q;i++)
        {
            cin>>x[i];
        }
        set<ll>s;
        for(auto i:x)
        {
            if(s.count(i)) continue;
            s.insert(i);
            ll k=(1LL << i);
            ll v=(1LL << (i-1));
            for(auto &j:a)
            {
                if(j%k==0)
                {
                    j+=v;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}