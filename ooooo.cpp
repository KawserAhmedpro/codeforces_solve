#include <bits/stdc++.h>
using namespace std;

void solve_case() {
    long long n;
    cin >> n;

    long long total_cost = 0;
    long long power = 1;
    int level = 0;

    while (power * 3 <= n) {
        power *= 3;
        level++;
    }

    while (n > 0) {
        long long take = n / power;
        if (take > 0) {
            long long cost_per_bundle;
            if (level == 0) {
                cost_per_bundle = 3;
            } else {
                cost_per_bundle = 3LL * power + 1LL * level * (power / 3);
            }
            total_cost += take * cost_per_bundle;
            n %= power;
        }
        power /= 3;
        level--;
    }

    cout << total_cost << "\n";
}

int main() {
  

    int test_cases;
   cin >> test_cases;
    while (test_cases--) {
        solve_case();
    }
    return 0;
}
