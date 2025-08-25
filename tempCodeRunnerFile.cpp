#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int l=0,r=n-1;
       int ans=0;
        while(l<r){
            int suml=0,sumr=0;
            suml+=a[l];
             sumr+=a[r];
            if(suml==sumr){
                ans=max(ans,n-r-l+1-2);
            }
            if(suml>sumr){
                r++;
            }
            if(suml<sumr){
                l++;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}