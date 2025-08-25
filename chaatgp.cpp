#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vector<long long> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }

        int coins = 0;

        while(!a.empty()) {
            // Step 1: sort the array
            sort(a.begin(), a.end());

            // Step 2: find an element <= c (free destroy)
            bool destroyed = false;
            for(int i = 0; i < a.size(); ++i) {
                if(a[i] <= c) {
                    a.erase(a.begin() + i);
                    destroyed = true;
                    break;
                }
            }

            // Step 3: If nothing destroyed freely, destroy smallest one for 1 coin
            if(!destroyed) {
                coins++;
                a.erase(a.begin()); // smallest element
            }

            // Step 4: multiply all remaining by 2
            for(int i = 0; i < a.size(); ++i) {
                if (a[i] > 1e18 / 2) a[i] = 1e18; // avoid overflow
                else a[i] *= 2;
            }
        }

        cout << coins << endl;
    }
    return 0;
}
