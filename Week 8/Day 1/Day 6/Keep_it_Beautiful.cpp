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
        int n,first=-1,last=-1;
        bool flag=false;
        cin>>n;
        while(n--)
        {
            int num;
            cin>>num;
            if(flag)
            {
                if(num>=last && num<=first)
                {
                    last=num;
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
            }
            else
            {
                if(first==-1)
                {
                    cout<<"1";
                    first=num;
                    last=num;
                }
                else if(last<=num)
                {
                    cout<<"1";
                    last=num;
                }
                else if(first>=num)
                {
                    flag=true;
                    cout<<"1";
                    last=num;
                }
                else
                {
                    cout<<"0";
                }
            }
        }
        cout<<endl;
    }
}