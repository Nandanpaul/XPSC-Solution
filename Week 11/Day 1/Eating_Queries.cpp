#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>v(n),prefix(n+1);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        for(int i=1;i<=n;i++)
        {
            prefix[i]=prefix[i-1]+v[i-1];
        }
        for(int i=0;i<q;i++)
        {
            int k,ans=-1;
            cin>>k;
            auto it=lower_bound(prefix.begin(),prefix.end(),k);
            if(it!=prefix.end())
            {
                cout<<it-prefix.begin()<<endl;
            }
            else
            {
                cout<<ans<<endl;
            }
        }
    }
}