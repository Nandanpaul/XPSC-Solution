#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,h;
        cin>>n>>m>>h;
        priority_queue<int>pq;
        multiset<int,greater<int>>a,b;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.insert(x);
        }
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            b.insert(x);
        }
        for(auto val:b)
        {
            pq.push(val*h);
        }
        int sum=0;
        for(auto v:a)
        {
            if(!pq.empty())
            {
                int front=pq.top();
                pq.pop();
                if(front>v)
                {
                   sum+=v;
                }
                else
                { 
                   sum+=front;
                }
            }
        } 
        cout<<sum<<endl; 
    }
}