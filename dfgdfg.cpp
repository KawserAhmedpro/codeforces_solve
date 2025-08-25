#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // Early exit if no element is ≤ c
        bool hasEligible = false;
        for (auto num : v) {
            if (num <= c) {
                hasEligible = true;
                break;
            }
        }
        if (!hasEligible) {
            cout << v.size() << "\n";
            continue;
        }

        while (true) {
            long long maxEligible = LLONG_MIN;
            bool found = false;

            // Find max eligible
            for (auto num : v) {
                if (num <= c) {
                    maxEligible = max(maxEligible, num);
                    found = true;
                }
            }

            if (!found) break;

            // Remove only one max eligible
            bool removed = false;
            vector<long long> newV;
            for (auto num : v) {
                if (!removed && num == maxEligible) {
                    removed = true; // skip this one
                } else {
                    newV.push_back(num);
                }
            }
            v = newV;

            // Now double all remaining values
            for (auto& num : v) {
                num *= 2;
            }
        }

        cout << v.size() << "\n";
    }

    return 0;
}
