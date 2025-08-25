#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      string a;
      cin>>a;
      map<int ,int >m;
      int l=0,r=0;
      int ans=0;
      int n=a.length();
      while(l<n){
        m[a[r]]++;
        if(m[a[r]]>1){
        while(m[a[r]]>1){
            m[a[l]]--;
            l++;
        }
        }
        ans=min(ans,r-l+1);
        r++;

      }
      cout<<ans<<endl;
    }
    return 0;
}