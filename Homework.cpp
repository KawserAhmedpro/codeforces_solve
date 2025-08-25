#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        long long n; 
        cin >> n;

        vector<unsigned long long> ans;
        __int128 ten = 10;

        // precompute powers of 10 with __int128
        __int128 p10 = 10; // 10^1
        for (int k = 1; k <= 18; ++k) {
            __int128 pk = 1 + p10;            // 1 + 10^k
            unsigned long long d = (unsigned long long)pk;

            // Only check while pk <= n to avoid unnecessary mods
            if (pk > (__int128)n) break;

            if (n % d == 0) {
                unsigned long long x = n / d;
                ans.push_back(x);
            }
            p10 *= ten;                        // next power of 10
        }

        sort(ans.begin(), ans.end());
        if (ans.empty()) {
            cout << 0 << '\n';
        } else {
            cout << ans.size() << '\n';
            for (size_t i = 0; i < ans.size(); ++i) {
                if (i) cout << ' ';
                cout << ans[i];
            }
            cout << '\n';
        }
    }
    return 0;
}
