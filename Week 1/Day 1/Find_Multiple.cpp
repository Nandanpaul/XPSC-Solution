#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int found=-1;
    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            found=i;
        }
    }
    cout<<found;

    return 0;
}
