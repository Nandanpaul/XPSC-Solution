#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=n*(n-1)/2,b[a];
        for(int i=0;i<a;i++)cin>>b[i];
        sort(b,b+a);
        for(int i=0;i<a;i+=--n)cout<<b[i]<<' ';
        cout<<"1000000000\n";
    }
}