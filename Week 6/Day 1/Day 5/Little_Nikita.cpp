#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; 
  cin >>t;
  while (t--) 
  {
    int X, Y;
    cin >>X>>Y;
    if(X >= Y && (X%2) == (Y%2)) 
    {
        cout <<"Yes" <<endl;
    }
    else 
    {
        cout <<"No" <<endl;
    }
  }
     
  return 0;
}