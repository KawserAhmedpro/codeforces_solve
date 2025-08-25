#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        
        // Fixed input: read vector values one by one
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Prefix sum array
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + a[i];
        }

        int ans = 0;
        for (int i = 0; i + k <= n; ) {
            if (prefix[i + k] - prefix[i] == 0) {
                ans++;
                i += k + 1; // skip k days + 1 rest day
            } else {
                i++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

