#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // Early exit: no value ≤ c
        bool valid = false;
        for(int num : v) {
            if(num <= c) {
                valid = true;
                break;
            }
        }

        if(!valid) {
            cout << v.size() << endl;
            continue;
        }

        // Main logic
        while (true) {
            int target = c;
            int ans = INT_MIN;
            bool found = false;

            // Find max eligible
            for (int num : v) {
                if (num <= target) {
                    ans = max(ans, num);
                    found = true;
                }
            }

            if (!found) break;

            // Remove just one occurrence
            auto it = find(v.begin(), v.end(), ans);
            if (it != v.end()) v.erase(it);

            // ✅ Only double if we removed a number
            for (int i = 0; i < v.size(); i++) {
                v[i] *= 2;
            }
        }

        cout << v.size() << endl;
    }

    return 0;
}
