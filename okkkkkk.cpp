#include <iostream>

void solve() {
    long long n;
    std::cin >> n;

    long long cost = 0;
    long long p = 1;
    long long c = 3;
    
   while (p * 3 <= n) {
        p *= 3;
     }
    
    long long current_power_of_3 = p;
    long long current_cost_for_deal = 3;
    
    while (n > 0) {
        long long deals = n / current_power_of_3;
        cost += deals * current_cost_for_deal;
        
        n %= current_power_of_3;
        current_power_of_3 /= 3;
    }
}

void solve_correct() {
    long long n;
    std::cin >> n;
    
    long long cost = 0;
    
    long long p = 1;
    int x = 0;
    while (p * 3 <= n) {
        p *= 3;
        x++;
    }
    while (n > 0) {
        long long num_deals = n / p;
        if (num_deals > 0) {
            long long deal_cost = 0;
            if (x == 0) {
                deal_cost = 3;
            } else {
                deal_cost = 3LL * p + (long long)x * (p / 3);
            }
            cost += num_deals * deal_cost;
            n %= p;
        }
        p /= 3;
        x--;
    }
    
    std::cout << cost << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve_correct();
    }
    return 0;
}