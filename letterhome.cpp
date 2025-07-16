#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s ,ans=0;
        cin>>n>>s;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1&& arr[0]==s) ans =0;
        else if( n==1 && arr[0]!=s) ans= abs(s-arr[0]);
        else if(s<arr[0] && s< arr[n-1]) ans = arr[n-1]-s;
        else if(s>arr[0] && s> arr[n-1]) ans = s-arr[n-1];
       else{

        int left= s-arr[0];
        int right= arr[n-1]-s;
        if(left>right){
            ans+= right*2 +left;
        }
        else ans+=left*2+right;}
        cout<<ans<<endl;
    }
}