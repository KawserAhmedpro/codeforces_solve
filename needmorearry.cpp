#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int lastpicked=v[0];
        int ans=1;
        for(int i=1;i<n;i++){
            if(v[i]>lastpicked+1){
                ans++;
                lastpicked= v[i];
            }
        }
      cout <<ans<<endl;
    }
    return 0;
}