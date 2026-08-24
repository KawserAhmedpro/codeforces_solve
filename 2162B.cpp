#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s; 

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
