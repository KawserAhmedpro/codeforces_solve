#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int l = 0, r = n - 1;
        bool ok = true;

        for (int i = 1; i <= n; i++) {
            if (a[l] == i) {
                l++;
            } else if (a[r] == i) {
                r--;
            } else {
                ok = false;
                break;
            }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
