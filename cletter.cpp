#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<long long> pref(n);
    for (int i = 0; i < n; ++i) {
        long long x; 
        cin >> x;
        pref[i] = x + (i ? pref[i - 1] : 0);   // build prefix sums
    }

    while (m--) {
        long long x; 
        cin >> x;

        // first index where pref[i] >= x
        int i = int(lower_bound(pref.begin(), pref.end(), x) - pref.begin());

        long long prev = (i == 0) ? 0 : pref[i - 1];
        long long room = x - prev;             // position inside that dorm

        cout << (i + 1) << ' ' << room << '\n'; // dorm is 1-based
    }
    return 0;
}
