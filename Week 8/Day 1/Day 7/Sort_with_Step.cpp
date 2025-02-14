#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int>temp=v;
        sort(temp.begin(),temp.end());
        map<int,set<int>>mp;
        for(int i=0;i<n;i++)
        {
            mp[i%k].insert(v[i]);
        }
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            auto flag=mp[i%k];
            if(flag.find(temp[i])==flag.end())
            {
                m[i%k]++;
            }
        }
        if(m.size()==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        int cnt=0;
        for(auto i:m)
        {
            if(i.second==1)
            {
                cnt++;
            }
            else
            {
                cnt+=3;
            }
        }
        if(cnt==2)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}