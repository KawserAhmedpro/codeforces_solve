#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        
        cin>>a[i];
        a[i]+=a[i-1];

    }
     int ans=0;
     for(int i=1;i<=n;i++){
        int k= upper_bound(a.begin(),a.end(),t+a[i])-1-a.begin()-i;
        ans =max(ans,k);
     }

    cout<<ans<<endl;
    return 0;


}