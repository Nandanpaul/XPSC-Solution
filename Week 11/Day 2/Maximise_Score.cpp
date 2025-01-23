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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int minimum=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int bob=INT_MIN;
            if(i>0)
            {
                bob=max(bob,abs(v[i]-v[i-1]));
            }
            if(i<n-1)
            {
                bob=max(bob,abs(v[i]-v[i+1]));
            }
            minimum = min(minimum,bob);
        }
        cout<<minimum<<endl;
    }
}