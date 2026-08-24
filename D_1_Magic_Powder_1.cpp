#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int left=0,right=3000,ans=0;
    while(left<=right){
        // int mid=(left+right)/2;
        // long long sum=0;
        // for(int i=0;i<n;i++){
        //     sum+=max(0,a[i]*mid-b[i]);
        // }
        // if(sum<=k){
        //     ans=mid;
        //     left=mid+1;
        // }
        // else{
        //     right=mid-1;
        // }
        int mid=left+(right-left)/2;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+= max(0,(a[i]*mid-b[i]));}
            if(sum<=k){
                ans=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
                    }

        }
    
    cout<<ans<<endl;
}