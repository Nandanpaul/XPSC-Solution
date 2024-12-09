#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int N,M;
        cin>>N>>M;
        if (M<=N-1) 
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}