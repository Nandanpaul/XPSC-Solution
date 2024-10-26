#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int sum=0;
    for(int i=1;i<=2;i++)
    {
        if(a>b)
        {
            sum+=a;
            a--;
        }
        else if(a<b)
        {
            sum+=b;
            b--;
        }
        else
        {
            sum+=a;
            a--;
        }
    }
    cout<<sum;
}
