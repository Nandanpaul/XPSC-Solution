#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<q;i++)
    {
        int target,l=0,r=n-1,mid,ans=0;
        cin>>target;
        bool found=false;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(target>=v[mid])
            {
                ans=mid;
                l=mid+1;
                found=true;
            }
            else
            {
                r=mid-1;
            }
        }
        if(found)
        {
            cout<<ans+1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
}