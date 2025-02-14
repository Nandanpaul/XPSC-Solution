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
        ll zero=0,sum=0,one=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            //sum+=x;
            if(x==0) 
            {
                zero++;
                //cout<<"Z -> "<<zero<<" ";
            }
            if(x==1)
            {
                one++;
                //cout<<"O -> "<<one<<" ";
            }
        }
        ll op=0;
        if(zero>0)
        {
            op=one*(1LL<<zero);
            cout<<op<<endl;
        }
        else
        {
            cout<<one<<endl;
        }
    }
}