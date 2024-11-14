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
        ll op=0,sum=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            sum+=abs(v[i]);
            if(v[i]<0 && !flag)
            {
                op++;
                flag=true;
            }
            else if(v[i]>0)
            {
                flag=false;
            }
        }
        cout<<sum<<" "<<op<<endl;
    }
}