#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        ll frq=0;
        for(auto it:mp)
        {
            frq=max(frq,(ll)it.second);
        }
        ll op=0;
        while(frq<n)
        {
            op++;
            if(n-frq>=frq)
            {
                op+=frq;
                frq*=2;
            }
            else
            {
                op+=n-frq;
                frq=n;
            }
        }
        cout<<op<<endl;
    }
}