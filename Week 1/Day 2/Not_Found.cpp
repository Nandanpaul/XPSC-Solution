#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     vector<bool> flag(26,false);
     for(char c : s)
     {
         flag[c-'a']=true;
     }
     for(int i=0;i<26;i++)
     {
         if(flag[i]==false)
         {
             cout<<char('a' + i);
             return 0;
         }
     }
     cout<<"None"<<endl;
}

