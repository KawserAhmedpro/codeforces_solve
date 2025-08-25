#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }

        int hk = h[k - 1];

       
        int hmax = h[0];
        for (int i = 1; i < n; ++i) {
            if (h[i] > hmax) hmax = h[i];
        }

        if (hk == hmax) {
            cout << "yes\n";
            continue;
        }

       
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            bool found = false;
            for (int j = 0; j < (int)v.size(); ++j) {
                if (h[i] == v[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) v.push_back(h[i]);
        }

        
        for (int i = 0; i < v.size(); ++i) {
            for (int j = i + 1; j < v.size(); ++j) {
                if (v[i] > v[j]) {
                    swap(v[i], v[j]);
                }
            }
        }

        
        int pos = -1;
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] == hk) {
                pos = i;
                break;
            }
        }

        
        bool ok = true;
        for (int i = pos; i + 1 < v.size(); ++i) {
            if (v[i + 1] - v[i] > hk) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "yes" : "no") << '\n';
    }

    return 0;
}
