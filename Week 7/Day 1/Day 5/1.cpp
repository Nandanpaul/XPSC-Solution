#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string s,t;
	    cin>>n>>s>>t;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]!=t[i])
	        {
	            count++;
	        }
	    }
	    if(count%2==0) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
}
