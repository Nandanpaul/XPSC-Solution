#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<char,ll>freq1;
        string s;
        cin>>s;
        for(auto c:s)
        {
            freq1[c]++;
        }
        string t;
        cin>>t;
        map<char,ll>freq2;
        for(auto c:t)
        {
            freq2[c]++;
        }
      
        if(freq1==freq2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}