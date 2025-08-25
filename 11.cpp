#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> freq(55, 0);
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
 
    int sum = 0;
 
 
    int maxval = 0;
    while (freq[maxval] > 0) {
        maxval++;
    }
    sum += maxval;
 
    for (int i = 0; i < maxval; i++) {
        freq[i]--; 
    }
 
    
    for (int i = 0; i < 55; i++) {
        sum += i * freq[i];
    }
 
    cout << sum << "\n";
}
 
int main() {
    
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}