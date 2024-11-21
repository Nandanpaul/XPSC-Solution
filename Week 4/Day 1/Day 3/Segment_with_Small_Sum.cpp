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
            ans=max(ans,r-l+1);
        }
        else
        {
            sum-=a[l];
            l++;
        }
        r++;
    }
    cout<<ans;
}