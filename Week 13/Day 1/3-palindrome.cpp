#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long 
using namespace std;
int main()
{
    fastread();
    ll n;
    cin>>n;
    string s="bbaa";
    for(ll i=0;i<n;i++)
    {
       cout<<s[i%4];
    }
}