#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    long long sum=0;
    long long odd=LLONG_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2!=0)
        {
            odd=min(odd,a[i]);
        }
    }
    if(sum%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
        sum-=odd;
        cout<<sum<<endl;
    }
}
