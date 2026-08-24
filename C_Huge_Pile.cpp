// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long t;
//     cin>>t;
//     while(t--){
//         long long n,k;
//         cin>>n>>k;
//         if(n==k)cout<<'0'<<endl;
//         else {
//              long long l,r,ans=0;
//             l=k,r=k;
//             bool f=false;
//             while(r<n){
              
//                 l=2*l-1;r=2*r+1;ans++;
//                 if(l<=n && n<=r){
//                     cout<<ans<<endl;
//                     f=true;
//                     break;
//                 }

//             }
//            if(!f) cout<<'-1'<<endl;
//         }
//     }
//     return 0;
// }
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
 
void Solve()
{
    ll n, x;
    cin >> n >> x;
    if (n == x) {
        cout << "0\n";
        return;
    }
    ll l = x, r = x, ans = 0;
    while (r < n) {
        l = 2 * l - 1, r = 2 * r + 1, ans++;
        if (l <= n && n <= r) {
            cout << ans << '\n';
            return;
        }
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