#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n;
     cin>>n;
     vector<int >a(n);
     for(int i=0;i<n;i++){
        cin>>a[i];
     }   

     int cur=a[0],ans=0;

     for(int i=0;i<n;i++){
        cur&=a[i];
        if(cur==0){
          
            ans++;
            if(i + 1 < n) 
            cur=a[i+1];
        }
     }

     cout<<max(ans,1)<<endl;



}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}