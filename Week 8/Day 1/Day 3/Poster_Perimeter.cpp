#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    int mn=INT_MAX;
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=m;j++)
	        {
	            int p=2*(i+j);
	            int dif=abs(k-p);
	            mn=min(mn,dif);
	        }
	    }
	    cout<<mn<<endl;
	}

}
