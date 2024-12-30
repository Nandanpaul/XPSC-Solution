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
        int one=0;
        int zero=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        cout<<min(zero,one)<<endl;
    }
}