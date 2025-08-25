#include<bits/stdc++.h>
using namespace std;
int n,x[100005],m;
bool pred(int mid){
    if(x[mid]>m) return 1;
    return 0;
}
int main(){
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    int q;cin>>q;
    while(q--){
        cin>>m;
        int ans=n;
        int l=0,r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(pred(mid)){
                ans=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        }
          cout <<ans<<endl;
    }
  
    
}