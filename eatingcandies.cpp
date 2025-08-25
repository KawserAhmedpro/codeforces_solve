// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         int l = 0, r = n - 1;
//         long long suml = a[0], sumr = a[n-1];
//         int ans = 0;

//         while (l <r) {
//             if (suml < sumr) {
                
//                 l++;
//                 suml += a[l];
//             } if (sumr < suml) {
                
//                 r--;
//                 sumr += a[r];
//             } if (suml==sumr)
//             { // suml == sumr
//                 ans = max(ans, l + (n - r - 1)+2);
                
//                 l++;
//                 suml += a[l];
//                   r--;
//                 sumr += a[r];
//             }
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }
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
        long long suml = a[l], sumr = a[r];
        int ans = 0;

        while (l < r) {
            if (suml < sumr) {
                l++;
                suml += a[l];
            } else if (sumr < suml) {
                r--;
                sumr += a[r];
            } else { // suml == sumr
                ans = max(ans, (l + 1) + (n - r));
                l++;
                if (l < r) suml += a[l];  // safe check
            }
        }

        cout << ans << endl;
    }
    return 0;
}
