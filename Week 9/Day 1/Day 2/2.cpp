#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int h,l,w;
	    cin>>h>>l>>w;
	    int dim=2*((h*l)+(l*w)+(w*h));
	    int g=1000/dim;
	    cout<<g<<endl;
	}

}
