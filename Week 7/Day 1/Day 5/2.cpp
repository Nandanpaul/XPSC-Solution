#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,p;
	cin>>n>>k>>p;
	int Ved_Height=0;
	int Varun_Height=p;
	vector<int>v;
	int mx=0;
	for(int i=0;i<n;i++)
	{
	    int x;
	    cin>>x;
	    mx=max(mx,x);
	    v.push_back(x);
	}
	Ved_Height+=mx+k;
	for(int val:v)
	{
	    Varun_Height+=val;
	}
    Varun_Height-=mx;
    if(Ved_Height>Varun_Height)
    {
        cout<<"Ved"<<endl;
    }
    else if(Ved_Height<Varun_Height)
    {
        cout<<"Varun"<<endl;
    }
    else
    {
        cout<<"Equal"<<endl;
    }
	}
}
