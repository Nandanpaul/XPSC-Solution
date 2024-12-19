#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        if(s=="()")
        {
            cout<<"No"<<endl;
            continue;
        }
        bool flag=false;
        for(int i=0;i<n-1;i++)
        {
            if(s.substr(i,2)==")(")
            {
                flag=true;
                break;
            }
        }
        string ans="";
        if(flag)
        {
            for(int i=0;i<n;i++)
            {
                ans+='(';
            }
            for(int i=0;i<n;i++)
            {
                ans+=')';
            }
            cout<<"Yes"<<endl;
            cout<<ans<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                ans+="()";
            }
            cout<<"Yes"<<endl;
            cout<<ans<<endl;
        }
    }
}