#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,ans=0;
        cin>>n;
        char s [101];
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='0')ans =1;

        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}