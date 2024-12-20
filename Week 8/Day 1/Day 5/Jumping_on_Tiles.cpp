#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.length();
        char sc = s[0];
        char ec = s[n - 1];

        int si = sc - 'a' + 1;         // si = start_index
        int ei = ec - 'a' + 1;          // ei = end_index

        vector<pair<int, int>> inter;

        
        for (int i = 1; i < n - 1; ++i) {
            int ci = s[i] - 'a' + 1;
            if ((si <= ci && ci <= ei) || (ei <= ci && ci <= si)) {
                inter.emplace_back(ci, i + 1);
            }
        }

       
        if (si <= ei) {
            sort(inter.begin(), inter.end());
        } else {
            sort(inter.rbegin(), inter.rend());
        }

        
        vector<int> path = {1}; 
        for (const auto &p : inter) {
            path.push_back(p.second);
        }
        path.push_back(n); 

       
        int cost = abs(si - ei);
        int jumps = path.size();

        
        cout << cost << " " << jumps << "\n";

        for (int i = 0; i < jumps; ++i) {
            cout << path[i] << (i + 1 == jumps ? "\n" : " ");
        }
    }

    return 0;
}