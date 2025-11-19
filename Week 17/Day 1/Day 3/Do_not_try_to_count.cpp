#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(string p,string s)
{
    if(p.size()<s.size()) return false;
    for(ll i=0;i<p.size()-s.size()+1;i++)
    {
        if(p.substr(i,s.size())==s)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        ll x,n;
        cin >> x >> n;

        string p;
        cin>>p;
        string s;
        cin>>s;

        string p1= p+p;
        string p2= p1+p1;
        string p3= p2+p2;
        string p4= p3+p3;
        string p5= p4+p4;

        ll ans=-1;
        if(check(p,s))
        {
            ans=0;
        }
        else if(check(p1,s))
        {
            ans=1;
        }
        else if(check(p2,s))
        {
            ans=2;
        }
        else if(check(p3,s))
        {
            ans=3;
        }
        else if(check(p4,s))
        {
            ans=4;
        }
        else if(check(p5,s))
        {
            ans=5;
        }
        cout<<ans<<endl;

    }
}