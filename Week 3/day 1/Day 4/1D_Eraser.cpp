#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l=0,r=0,cnt=0;
        while(r<n)
        {
            if(s[r]=='B')
            {
                cnt++;
                l=r;
                r=r+k-1;
            }
            r++;

        }
        cout<<cnt<<endl;
    }
}