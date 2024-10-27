#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    int cnt=0;
    if(t<=20)
    {
        int i=1;
        while(i*a<=t)
        {
            cnt=i*b;
            i++;
        }
    }
    cout<<cnt;

}
