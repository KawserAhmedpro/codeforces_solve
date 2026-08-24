#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
 
void Solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n), even;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even.push_back(arr[i]);
    }
    // x = even, y = even
    if (even.size() >= 2) {
        cout << even[0] << ' ' << even[1] << '\n';
        return;
    }
    // x = odd, y = even
    if (even.size() == 1) {
        for (int i = 0; i < n; i++) {
            if (arr[i] >= even[0])
                break;
            if ((even[0] % arr[i]) % 2 == 0) {
                cout << arr[i] << ' ' << even[0] << '\n';
                return;
            }
        }
    }
    // x = odd, y = odd
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < min(n, i + 35); j++)
            if ((arr[j] % arr[i]) % 2 == 0) {
                cout << arr[i] << " " << arr[j] << "\n";
                return;
            }
    cout << "-1\n";
}
 
int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        Solve();
    }
    return 0;
}