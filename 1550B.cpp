#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        char s[105];
        cin>>s;
        int ans=0;
        if(b>=0){
             ans=(a+b)*n;
        }
        else {
            int block=1;
            for(int i=1;i<n;i++){
                if(s[i]!=s[i-1])block++;
            }
            int op= (block/2)+1;
            ans= a*n+op*b;
        }
        cout<<ans<<endl;
    }
    return 0;
}