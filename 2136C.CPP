#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t,n,i,j,p;
    cin>>t;
    while(t--){
       cin>>n;
       ll a[n];
       ll ans[n];
       ll dp[n];
       ll c[n+1];
       unordered_map<ll,ll>mp[n+1];

       for(i=0;i<=n;i++){
             c[i]=0;
             ans[i]=0;
       }
       for(i=0;i<n;i++){
        cin>>a[i];
       }

       for(i=0;i<n;i++){
        c[a[i]]++;
        mp[a[i]][c[a[i]]]=i;

        if(c[a[i]]>=a[i]){
            p= c[a[i]]-a[i]+1;
            p=mp[a[i]][p];
            dp[i]=((p>0)? ans[p-1]:0)+a[i];
        }
        else {
            dp[i]=(i>0)?ans[i-1]:0;
        }

        ans[i]=max((i>0?ans[i-1]:0),dp[i]);
       }
       cout<<ans[n-1]<<"\n";

    }
    return 0;
}