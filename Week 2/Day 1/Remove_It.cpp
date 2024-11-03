#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        if(y!=x)
        {
            v.push_back(y);
        }
    }
    for(int val:v)
    {
        cout<<val<<" ";
    }
}
