#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int zero=0;
	    int one=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='0')
	        {
	            zero++;
	        }
	        else
	        {
	            one++;
	        }
	    }
	    if(zero==n || one==n)
	    {
	        cout<<n<<endl;
	    }
	    else
	    {
	        cout<<"1"<<endl;
	    }
	}

}
