#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int mn=min(x,y);
        int draw=mn%3;
        cout<<draw<<endl;
    }
}
