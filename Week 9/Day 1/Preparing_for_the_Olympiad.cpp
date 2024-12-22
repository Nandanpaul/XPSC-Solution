#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<long long int>v(n,0);
        v.push_back(a[n-1]);
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>b[i+1])
            {
                v.push_back(a[i]-b[i+1]);
            }
        }
        long long int sum=0;
        for(auto val:v)
        {
            sum+=val;
        }
        cout<<sum<<endl;
    }
}