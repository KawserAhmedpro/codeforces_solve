#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int>a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
       if(a.empty()|| x!=a.back()){
        a.push_back(x);
       }
    }

   
    int count = 0;

    for(int i=0;i<a.size();i++){
        if((i==0||a[i]<a[i-1])  &&(i==a.size()-1 || a[i]<a[i+1]) ){
            count++;
        }
    }

    
    if (count == 1) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
