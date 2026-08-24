#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int >a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
      int cmax=0;
        for(int i=0;i<n;i++){
            cmax=max(cmax,a[i]);
            if(i%2==1){
                a[i]=cmax;
            }
        }
        int ans=0;

        for(int i=0;i<n;i++){
            if(i%2==0){
            int left,right;
            left =(i>0?a[i-1]:INT_MAX);
            right=(i+1<n)?a[i+1]:INT_MAX;

            int diff= a[i]-(min(left,right)-1);
           if(diff>0){
            ans+=diff;
           }
        }
        }
        cout<<ans<<endl;
    }
    return 0;
}