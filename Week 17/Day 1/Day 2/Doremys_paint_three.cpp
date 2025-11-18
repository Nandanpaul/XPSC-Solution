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
        map<ll,ll>m;
        for(ll i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }
        if(n==2)
        {
            cout<<"Yes"<<endl;
        }
        else if(n%2==0)
        {
            if(m.size()==2)
            {
                bool flag = true;
                for(auto &mp : m)
                {
                    if(mp.second%2!=0) 
                    {
                        flag=false;
                    }
                }

                if(flag) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            else if(m.size()==1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            if(m.size()==2)
            {
                vector<ll>v;
                for(auto &mp : m)
                {
                    v.push_back(mp.second);
                }
                sort(v.begin(),v.end());
                if(v[0]+1 == v[1]) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            else if(m.size()==1)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
}
