#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+50;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin>>t;
    int arr[N];
    while(t--)
    {
        int n; 
        cin>>n;   
        for(int i=1;i<=n;i++) 
        {
            cin>>arr[i];
        }
        int v=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i+1])
            {
                v=i;
                break;
            }
        }
        if(!v) 
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            int flag=0;
            for(int i = v+1; i<=n; i++)
            {
                int j=(i%n)+1;
                if(arr[i]>arr[j]) 
                {
                    flag=1;
                }
            }
            if(!flag)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout <<"No"<<endl;
            }
        }
    }
    return 0;
}