#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll ans=0,dot=0;
        bool flag=false;
        for(ll i=0;i<n-1;i++)
        {
            if(ans==2)
            {
                flag==true;
                break;
            }
            else if(s[i]=='.' && s[i+1]=='.')
            {
                ans++,dot++;
                if(ans==2)
                {
                    flag=true;
                    break;
                }
            }
            else if(s[i]=='.')
            {
                dot++;
            }
            else
            {
                ans=0;
            }
        }
        if(flag)
        {
            cout<<"2"<<endl;
        }
        else
        {
            if(s[n-1]=='.')
            {
                dot++;
            }
            cout<<dot<<endl;
        }
    }
}