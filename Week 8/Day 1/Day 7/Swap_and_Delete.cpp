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
        string s;
        cin>>s;
        int pos=0,zero=0,one=0,n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        //cout<<"ZERO : "<<zero<<" "<<"ONE : "<<one<<" ";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(one>0)
                {
                    one--;
                }
                else
                {
                    pos=i;
                    break;
                }
            }
            else 
            {
                if(zero>0)
                {
                    zero--;
                }
                else
                {
                    pos=i;
                    break;
                }
            }
            pos=i+1;
        }
        //cout<<"N : "<<n<<" "<<"pos: "<<pos<<" ";
        cout<<n-pos<<endl;
    }
}