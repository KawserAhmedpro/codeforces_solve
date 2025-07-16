#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(n<k || x<k-1) cout<<-1<<endl;
        else{
             int ans= (k-1)*k/2;
            if(x==k)x--;
            ans+=(n-k)*x;
            cout<<ans<<endl;
        }
        
    }
}