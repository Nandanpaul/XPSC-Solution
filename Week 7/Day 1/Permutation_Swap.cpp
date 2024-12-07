#include <bits/stdc++.h> 
using namespace std;
 
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) 
    {
    	int n, r= 0;
    	cin >> n;
    	for (int i = 1; i <= n; i++) 
        {
    		int x; cin >> x;
    		r = __gcd(r, abs(x - i));
    	}
    	cout << r << endl;
    }
    return 0;
}