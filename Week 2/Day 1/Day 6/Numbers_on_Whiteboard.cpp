#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        priority_queue<ll>pq;
        cin>>n;
        for(ll i=n; i>=1; i--)
        {
            pq.push(i);
        }
        ll a,b,c;
        cout<<2<<endl;
        while(pq.size() > 1)
        {
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            cout<<a<<" "<<b<<endl;
            c = a + b;
            if(c & 1)c++;
            c /= 2;
            pq.push(c);
        }
    }
}
