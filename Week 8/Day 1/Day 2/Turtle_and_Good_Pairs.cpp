#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,ll>mp;
        for(auto c:s)
        {
            mp[c]++;
        }

        priority_queue<pair<ll,char>>pq;
        for(auto c:mp)
        {
            pq.push({c.second,c.first,});
        }
        string ans="";
        while(pq.size()>1)
        {
            auto it=pq.top();
            pq.pop();
            auto it2=pq.top();
            pq.pop();
            if(it.first!=1) pq.push({it.first-1,it.second});
            if(it2.first!=1) pq.push({it2.first-1,it2.second});
            ans+=it.second;
            ans+=it2.second;
        }
        if(pq.size()!=0)
        {
            auto it=pq.top();
            pq.pop();
            for(ll i=0;i<it.first;i++)
            {
                ans+=it.second;
            }
        }
        cout<<ans<<endl;
    }
}