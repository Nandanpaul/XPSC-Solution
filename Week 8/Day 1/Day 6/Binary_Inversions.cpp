#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long
using namespace std;
ll result(vector<int> &a)
{
    ll zero=0,res=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        if(a[i]==0)
        {
            zero++;
        }
        else
        {
            res+=zero;
        }
    }
    return res;
  
}
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=result(a);
        //cout<<ans<<" ";
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                a[i]=1;
                ans=max(ans,result(a));
                a[i]=0;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==1)
            {
                a[i]=0;
                ans=max(ans,result(a));
                a[i]=1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}