
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int left=4-(x+y+z);
    float team1=(x*1)+(y*0.5)+left;
    float team2=4-team1;
    if(team1>team2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}
