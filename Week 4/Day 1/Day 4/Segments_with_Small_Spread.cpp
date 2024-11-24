#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long k;
    cin>>n>>k;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0,r=0;
    multiset<long long>ml;
    long long ans=0;
    while(r<n)
    {
        ml.insert(a[r]);
        long long mx=*ml.rbegin(),mn=*ml.begin();
        if(mx-mn<=k)
        {
            ans+=r-l+1;
        }
        else
        {
            while(l<=r)
            {
                mx=*ml.rbegin(),mn=*ml.begin();
                if(mx-mn<=k) break;
                ml.erase(ml.find(a[l]));
                l++;
            }
            mx=*ml.rbegin(),mn=*ml.begin();
            if(mx-mn<=k)
            {
                ans+=r-l+1;
            }

        }
        r++;
    }
    cout<<ans<<endl;

}