// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--){
//         int n;
//         cin>>n;
//         vector<int>a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         long long g=a[0];
//        long long ans=-1;
//         for(int i=1;i<n;i++){
//             for(long long j=2;j<10^18;j++){
//                  g=__gcd(j,a[i]);
//                  if(g==1){
//                     ans=j;
//                     break;
//                  }
//             }
//         }

//         cout<<ans<<endl;

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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long g = a[0];
        for (int i = 1; i < n; i++) g = __gcd(g, a[i]);

        long long ans = -1;
        for (long long j = 2; j <= 1000000; j++) {
            if (__gcd(j, g) == 1) {
                ans = j;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}

