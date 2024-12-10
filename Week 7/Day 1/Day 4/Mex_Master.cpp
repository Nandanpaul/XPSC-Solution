#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        
        int zero = 0;
        bool flag = false;
        
        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            if (x == 0) 
            {
                zero++;
            } 
            else if (x >= 2) 
            {
                flag = true;
            }
        }

        if (zero <= (n + 1) / 2) 
        {
            cout << "0" << endl;
        } 
        else if (flag || zero == n) 
        {
            cout << "1" <<endl;
        } 
        else 
        {
            cout << "2" <<endl;
        }
    }
    return 0;
}