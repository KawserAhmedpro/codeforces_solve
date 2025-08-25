#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int a,b,x,y;
       cin>>a>>b>>x>>y;

       int M= max(a,b)+2;
       vector<ll>dist(M+1,INF);
       dist[a]=0;

       priority_queue<pair<li,int>,vector<pair<li,int>>,greater<pair<ll,int>>> pq;
       pq.push({0,a});

         while (!pq.empty()) {
        auto [cd, u] = pq.top();
        pq.pop();

        if (dist[u] < cd) continue; // Skip outdated entry

        if (u == b) break; // we found the best for b

        // 1) increment by 1: u -> u+1 at cost x
       
        if (u + 1 < M) {
            ll nd = cd + x;
            if (nd < dist[u + 1]) {
                dist[u + 1] = nd;
                pq.push({nd, u + 1});
            }
        }

         int v = u ^ 1; // toggles bit0
        if (v < M) {
            ll nd = cd + y;
            if (nd < dist[v]) {
                dist[v] = nd;
                pq.push({nd, v});
            }
        }
    }

    ll ans = dist[b];
    cout << (ans == INF ? -1 : ans) << "\n";
    }
    return 0;
}