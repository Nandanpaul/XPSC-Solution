#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) 
    {
        long long n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m);
        for (auto& x : a) 
        {
            cin >> x;
        }

        vector<int> q(k);
        for (auto& x : q) 
        {
            cin >> x;
        }

        if (k == n) 
        {
            for (long long i = 0; i < m; i++) cout << '1';
            cout << endl;
        } 
        else if (k == n - 1) 
        {
            long long rim = 1;
            for (auto x : q) 
            {
                if (x == rim) rim++;
                else break;
            }
            if (rim > n) rim = n;

            string r;
            r.reserve(m);
            for (auto x : a) 
            {
                r += (x == rim) ? '1' : '0';
            }
            cout << r << endl;
        }
        else 
        {
            for (long long i = 0; i < m; i++) cout << '0';
            cout << endl;
        }
    }

    return 0;
}