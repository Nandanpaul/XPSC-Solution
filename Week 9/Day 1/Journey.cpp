#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,c;
        cin>>n>>a>>b>>c;
        ll sum=a+b+c;
        ll f=n/sum;
        ll r=n%sum;
        ll days=f*3;
        if(r>0)
        {
            if(r<=a)
            {
                days++;
            }
            else if(r<=a+b)
            {
                days+=2;
            }
            else
            {
                days+=3;
            }
        }
        cout<<days<<endl;
    }
}