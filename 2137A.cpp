#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long ttt;
    cin >> ttt;
    while (ttt--) {
        long long a, b;
        cin >> a >> b;

        long long ans;
        if (b % 2 == 1 && a % 2 == 1) {
            ans = a * b + 1;
        } else if (b % 2 == 1 && a % 2 == 0) {
            ans = -1;
        } else if (a % 2 == 1 && b % 4 == 2) {
            ans = -1;
        } else {
            long long part1 = a * ((a % 2) ? 2 : 1) + b / ((a % 2) ? 2 : 1);
            long long part2 = a * (b / 2) + 2;
            ans = max(part1, part2);
        }

        cout << ans << "\n";
    }

    return 0;
}
