#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;
   string s;
   cin>>n>>k>>s;
   map<char,int>frq;
   for(char c : s)
   {
      frq[c]++;
   }
   int odd=0;
   for(auto it:frq)
   {
      if(it.second%2!=0)
      {
          odd++;
      }
   }
   if(odd-1<=k)
   {
       cout<< "YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }

}