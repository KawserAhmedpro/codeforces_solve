#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> a) {
    int n = a.size();

    while (true) {
        int mx = *max_element(a.begin(), a.end());
        if (mx == 0) return true; 

        int idx = max_element(a.begin(), a.end()) - a.begin();

        
        a[idx]--;

        bool matched = false;

      
        if (idx - 1 >= 0 && a[idx] == a[idx - 1]) {
            matched = true;
            int val = a[idx];
            int j = idx - 1;
            while (j >= 0 && a[j] == val) {
                a[j]--;
                j--;
            }
        }
       
        else if (idx + 1 < n && a[idx] == a[idx + 1]) {
            matched = true;
            int val = a[idx];
            int j = idx + 1;
            while (j < n && a[j] == val) {
                a[j]--;
                j++;
            }
        }

        if (!matched) return false; 
    }

    return false; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        if (solve(a)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
