#include<bits/stdc++.h>
using namespace std;
using  ll =long long;
 bool is_square(ll sum){
    ll l=0,r=1e9;while(l<=r){
   ll mid= l+(r-l)/2;
    if(mid*mid==sum) return true;
    else if(mid*mid>sum) r=mid-1;
    else l=mid+1; }

    return false;
 }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        
        cin>>n;
        vector<int>a(n+1);
        ll  sum=0;
       
        for(int i=1;i<=n;i++){
            cin>>a[i];
              sum+=a[i];
        }
        
        if(is_square(sum)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
      

    }
}