#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p1,p2,p3,t1,t2;
    cin>>n>>p1>>p2>>p3>>t1>>t2;

    vector<pair<int,int>> period(n);

    for (int i = 0; i < n; i++) {
        cin >> period[i].first >> period[i].second;
    }

    int tp= 0;

    for(int i=0;i<n;i++)
    {
        int l=period[i].first;
        int r=period[i].second;

        int tw=(r-l);
        tp+= p1*tw;

        if(i<n-1)
        {
            int next=period[i+1].first;
            int extra=(next-r);

            if(extra<=t1)
            { 
                tp+=extra*p1;
            }
            else if(extra<=t1+t2) 
            {
                tp+= (t1*p1) + ((extra-t1)*p2);
            }
            else 
            {
                tp+= (t1*p1)+(t2*p2)+((extra-(t1+t2))*p3);   
            }
        }

    }

    cout<<tp<<endl;


}