#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,la;
        cin>>n>>k>>la;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++)
        {
            int m,l;
            cin>>m>>l;
            v.push_back({m,l});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        int MinutesCount=0;
        int song=0;
        for(auto val:v)
        {
            int language=val.second;
            int minutes=val.first;
            if(language==la && song<k)
            {
                MinutesCount+=minutes;
                song++;
            }
        }
        if(song<k)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<MinutesCount<<endl;
        }

    }
}
