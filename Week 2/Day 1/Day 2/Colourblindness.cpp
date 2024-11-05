#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c;
        cin>>c;
        int r=2;
        char s[r][c];
        bool flag=true;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>s[i][j];
                if(s[i][j]=='G')
                {
                    s[i][j]='B';
                }
            }
        }

        for(int i=0;i<c;i++)
        {
            if(s[0][i]!=s[1][i])
            {
                flag=false;
                break;
            }
        }

        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        
    }
}
