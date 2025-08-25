#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        unsigned long long n;
        cin >> n;

        vector<unsigned long long> ans;
        unsigned long long p10 = 10;

        for (int k = 1; k <= 18; k++) {
            unsigned long long d = 1 + p10; 

            if (d > n) break; 

            if (n % d == 0) {
                ans.push_back(n / d);
            }

           
            if (p10 > ULLONG_MAX / 10) break; 
            p10 *= 10;
        }

        sort(ans.begin(), ans.end());
        if (ans.empty()) {
            cout << 0 << "\n";
        } else {
            cout << ans.size() << "\n";
            for (size_t i = 0; i < ans.size(); i++) {
                if (i) cout << " ";
                cout << ans[i];
            }
            cout << endl;
        }
    }
    return 0;
}
