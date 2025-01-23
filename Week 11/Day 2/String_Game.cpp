#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    string s;
	    cin>>s;
	    ll one=0,zero=0;
	    for(ll i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        {
	            one++;
	        }
	        else
	        {
	            zero++;
	        }
	    }
	    ll pair=min(zero,one);
	    //cout<<"Pair -> "<<pair<<" ";
	    // cout<<pair%2<<endl;
	    if(pair%2==0)
	    {
	        cout<<"Ramos"<<endl;
	    }
	    else
	    {
	        cout<<"Zlatan"<<endl;
	    }
	    
	}

}
