#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    bool flag=false;
    for(int musk=0;musk<(1<<n);musk++)
    {
        int sum=0;
        for(int k=0;k<n;k++)
        {
            if((musk>>k)&1)
            {
                sum+=v[k];
            }
            else
            {
                sum-=v[k];
            }
        }
        if(sum%360==0)
        {
            flag=true;
            break;
        }
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}