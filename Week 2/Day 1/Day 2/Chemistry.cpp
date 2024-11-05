#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<char>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[v[i]]++;
        }
        int cnt=0;
        for(auto val:mp)
        {
            int c=val.second;
            if(c%2!=0)
            {
                cnt++;
            }
        }
        if(cnt-1<0)
        {
            cnt=0;
        }
        else
        {
            cnt=cnt-1;
        }
        if(cnt<=k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
