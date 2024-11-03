#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    cin>>s>>p;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=p[i])
        {
            cnt++;
        }
    }
    cout<<cnt;
    
}
