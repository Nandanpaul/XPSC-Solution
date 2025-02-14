#include<bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<vector<char>> v(8, vector<char>(8));
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>v[i][j];
            }
        }
        bool ok=false;
        for(int i=0;i<8;i++)
        {
            bool flag=true;
            for(int j=0;j<8;j++)
            {
                if(v[i][j]!='R')
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                ok=true;
                cout<<"R"<<endl;
                break;
            }
        }
        if(ok==false)
        {
            for(int i=0;i<8;i++)
            {
                bool flag=true;
                for(int j=0;j<8;j++)
                {
                    if(v[j][i]!='B')
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    cout<<"B"<<endl;
                    ok=true;
                    break;
                }
            }
        }
    }
}