#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
 
  int t; 
  cin >> t;
	while(t--)
    {
		int n; 
        cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
		long long sum = 0;
		int mx = 0, ans = 0;;
		for(int i = 0; i < n; i++)
        {
			sum += a[i];
			mx = max(mx, a[i]);
			if(sum - mx == mx) 
            {
                ans++;
            }
		}
		cout << ans << endl;
	}
     
  return 0;
}