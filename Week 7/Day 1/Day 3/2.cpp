#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,x,y;
    cin>>h>>x>>y;
    int use=0;
    if(h>0)
    {
        h-=y;
        use++;
        if(h%x!=0)
        {
            use+=(h/x)+1;
        }
        else
        {
            use+=h/x;
        }
        cout<<use<<endl;
    }
    else
    {
        cout<<use<<endl;
    }
    }
}