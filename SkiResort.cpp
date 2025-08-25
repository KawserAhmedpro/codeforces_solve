#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n,k,q;
       cin>>n>>k>>q;
       vector<int>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
         int len=0,ans=0;
         for(int i=0;i<n;i++){
             if(a[i]<=q){
                len++;
             }
             else {
                if(len>=k){
                    ans+=((len-k+1)*(len-k+2))/2;
                }
                 len=0;

             }

         }
          if(len>=k){
                    ans+=((len-k+1)*(len-k+2))/2;
                }
          

                cout<<ans<<endl;

        }
        return 0;
       
}