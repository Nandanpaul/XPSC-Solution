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
        string s;
        cin>>s;
        int cnt=0;
        if(n!=5)
        {
            cout<<"NO"<<endl;
            continue;
        }
        string c="Trumi";
        sort(c.begin(),c.end());
        sort(s.begin(),s.end());
        if(c==s)
        {
           cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
