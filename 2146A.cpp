#include <bits/stdc++.h>
using namespace std;
 
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
 
        
        map<int,int> mp;
        for (int x : a) mp[x]++;
 
        vector<int> freq;
        freq.reserve(mp.size());
        for (auto &p : mp) freq.push_back(p.second);
 
        if (freq.empty()) { cout << 0 << "\n"; continue; }
 
        sort(freq.begin(), freq.end());
        int mx = freq.back();
 
        int ans = 0;
        int i = 0, m = (int)freq.size();
        for (int target = 1; target <= mx; target++) {
            while (i < m && freq[i] < target) i++; 
            int k = m - i;
            ans = max(ans, target * k);
        }
 
        cout << ans << "\n";
    }
    return 0;
}