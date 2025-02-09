#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        s.erase(s.size()-2,2);
        s.push_back('i');
        cout<<s<<endl;
    }
}


