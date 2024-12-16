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
        cout<<(n+1)/2<<endl;
        int firstA=1,lastB=3*n-1;
        while(lastB>firstA)
        {
            cout<<firstA<<" "<<lastB<<" ";
            lastB-=3;
            firstA+=3;
        }
        cout<<endl;
    }
}