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
        vector<int>v;
        int x=1,y=(n*n);
        for(int i=1;i<=n*n;i++)
        {
            if(i%2==0)
            {
                v.push_back(y);
                y--;
            }
            else
            {
                v.push_back(x);
                x++;
            }
        }
        x=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                for(int j=x;j<n+x;j++)
                {
                    cout<<v[j]<<" ";
                }
                cout<<endl;
                x+=n;
            }
            else
            {
                for(int j=(n+x)-1;j>=x;j--)
                {
                    cout<<v[j]<<" ";
                }
                cout<<endl;
                x+=n;
            }
        }
    }
}