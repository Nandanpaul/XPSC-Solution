#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int p=n+m;
    multiset<int>s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    for(int i=n;i<p;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto val:s)
    {
        cout<<val<<" ";
    }
}