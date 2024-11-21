#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    long long int l=0,r=0,sum=0,ans=0;
    while(r<n)
    {
        sum+=a[r];
        if(sum<=k)
        {
            ans+=r-l+1;
        }
        else
        {
            while(sum>k && l<r)
            {
                sum-=a[l];
                l++;
            }
            if(sum<=k)
            {
                ans+=r-l+1;
            }
        }
        r++;
    }
    cout<<ans;
}