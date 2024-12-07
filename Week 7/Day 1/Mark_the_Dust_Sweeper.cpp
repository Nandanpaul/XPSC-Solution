#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) 
    cin >> v[i];
    ll ans = 0;
    int p = 0;

    while(p < n && v[p] == 0) p++;
    for(int i = p; i < n-1; i++)
    {
        ans += v[i];
        if(v[i] == 0) ans++;
    }
    cout << ans << endl;

    }
}