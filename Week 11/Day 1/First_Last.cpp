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
        int target,l=0,r=n-1,mid,ans=-1;
        cin>>target;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(target==v[mid])
            {
                ans=mid;
                //r=mid-1;//(first Occurence)
                l=mid+1;//(last Occurence)
            }
            else if(target<v[mid])
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
}