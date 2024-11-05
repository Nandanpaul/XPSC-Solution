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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            string s;
            cin>>s;
            int f=a[i];
            for(char c:s)
            {
            if(c=='D')
            {
                f= (f+1)%10;
            }
            else
            {
                f= ((f-1)+10)%10;
            }
            }
            v[i]=f;
        }
        for(auto val:v)
        {
            cout<<val<<" ";
        }
        cout<<endl;


    }
    return 0;
}

