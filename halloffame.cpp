#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        int ans=0,i=0;
        cin>>a;
        for( i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                ans=1;
                break;
            }
            
        }
        if(ans==0){cout<<-1<<endl;}
        else {
        if(a[i]=='R'){
            cout<<0<<endl;

        }
        else
            cout<<i+1<<endl;


    }
}
   return 0;
}
