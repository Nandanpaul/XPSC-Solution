#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int mx=0;
        if(n%2==0)
        {
            mx=max(mx,n*x);
            mx=max(mx,(n/2)*y);
        }
        if(n%2!=0)
        {
            int d=n/2;
            int r=n%2;
            mx=max(mx,(d*y)+(r*x));
            mx=max(mx,n*x);
        }
        cout<<mx<<endl;
    }
}
