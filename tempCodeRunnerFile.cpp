#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n,k,ans=0;
         cin>>n>>k;
         int a[n];
         for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]=k)ans=1;
            
         }
         if(ans)cout<<"YES"<<endl;
         cout<<"NO"<<endl;
    }
    return 0;
}
