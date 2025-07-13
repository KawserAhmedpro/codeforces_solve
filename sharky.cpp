// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m,l;
//         cin>>n>>m>>l;
//         vector<pair<pair<int,int>,int>>a;
//        for(int i=0,l,r;i<n;i++){
//         cin>>l>>r;
//        a.push_back({{l,r},1});
//        }
//        for(int i=0,x,v;i<m;i++){
//         cin>>x>>v;
//        a.push_back({{x,v},0});
//        }
//        sort(a.begin(),a.end());
//        multiset<int,greater<int>>st;
//        int ans=0,k=1;
//        for(auto [p,c]:a){
//         if(c==0){
//             st.insert(p.second);
//         }
//         else
        
//         {
//             int j=p.second-p.first+2;
//             while(k<j){
//                 if(st.empty()){
//                     ans=-1;
//                     break;
//                 }
//                 k+=*st.begin();
//                 st.erase(st.begin());
//                 ans++;
//             }
//         } if(ans==-1)break;
//        }
//        cout<<ans<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l;
        cin >> n >> m >> l;
        vector<pair<pair<int, int>, int>> a;
 
        // Type-1 intervals
        for (int i = 0; i < n; i++) {
            int left, right;
            cin >> left >> right;
            a.push_back({{left, right}, 1});
        }
 
        // Type-0 power segments
        for (int i = 0; i < m; i++) {
            int x, v;
            cin >> x >> v;
            a.push_back({{x, v}, 0});
        }
 
        sort(a.begin(), a.end());  // Sort by left bound
 
        multiset<int, greater<int>> st;
        int ans = 0;
        int k = 1;
 
       for (auto it : a) {
    pair<int, int> p = it.first;
    int c = it.second;
            if (c == 0) {
                st.insert(p.second);  // Power segments added
            } else {
                int target = p.second - p.first + 2;
                while (k < target) {
                    if (st.empty()) {
                        ans = -1;
                        break;
                    }
                    k += *st.begin();  // Add strongest available
                    st.erase(st.begin());
                    ans++;
                }
            }
            if (ans == -1) break;
        }
 
        cout << ans << endl;
    }
}
