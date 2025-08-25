#include<bits/stdc++.h>
using namespace std;
long long n,k;
vector<long long>v;
long long OpCount(long long mid){
    long long  count =0;
    for(int i=n/2;i<n;i++){
       if(v[i]<mid) count+=mid-v[i];
    }
    return count;
}

bool pred(long long mid){
    return OpCount(mid)<=k;
}


int main(){
    cin>>n>>k;
    v.resize(n);
    for(int i=0,x;i<n;i++){
        cin>>v[i];
        
    }
    sort(v.begin(),v.end());
    long long l=0,r=1e9+k+1,ans=0;
    while(l<=r){
        long long mid=l+(r-l)/2;
        if(pred(mid)){
           ans=mid; 
           l=mid+1;
        }
        else r=mid-1; 
    }
    cout<< ans<<endl;
    return 0;
}