#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int>seq;

        for(int i=n-k;i>=1;i--)
        {
            seq.push_back(i);
        }

        for(int i=n-k+1;i<=n;i++)
        {
            seq.push_back(i);
        }

        for(int val:seq)
        {
            cout<<val<<" ";
        }

        cout<<endl;
    }
}