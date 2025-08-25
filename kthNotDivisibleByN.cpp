#include<bits/stdc++.h>
using namespace std;
int n,k;
bool pred(int mid){
    int count = mid-(mid/n);
    return count>=k;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int l=1,r=2000000000,ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(pred(mid)){
                ans=mid;
                r=mid-1;

            }
            else 
            l=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}