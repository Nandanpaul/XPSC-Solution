#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool flag=true;
        int n=s.size();
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
    }
}