#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long 
using namespace std;
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int last=-1,first=-1;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(flag)
            {
                if(last<=a[i] && first>=a[i])
                {
                    last=a[i];
                }
                else
                {
                    flag=false;
                    break;
                }
                
            }
            else
            {   
                if(first==-1)
                {
                    first=a[i];
                    last=a[i];
                }
                else if(last<=a[i])
                {
                    last=a[i];
                    if(i==n-1)
                    {
                        flag=true;
                    }
                }
                else if(a[i]<=first)
                {
                    last=a[i];
                    flag=true;
                }
                else
                {
                    break;
                }
            }
        }
        if(flag) cout<<"Yes"<<endl;
        else cout <<"No"<<endl;
    }
}